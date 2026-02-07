package cpp

import (
	"bufio"
	"os"
	"path/filepath"
	"regexp"
	"strings"
)

type Member struct {
	Name   string
	Type   string
	Size   int
	Offset uint64
}

type Class struct {
	Name    string
	Base    string
	Methods map[string]string // Name -> Full Signature
	Members []Member
	Path    string
}

func ScanHeaders(root string) (map[string]*Class, error) {
	classes := make(map[string]*Class)
	
	classRegex := regexp.MustCompile(`class\s+([A-Za-z0-9_]+)(?:\s*:\s*(?:public|protected|private)\s+([A-Za-z0-9_]+))?`)
	methodRegex := regexp.MustCompile(`([A-Za-z0-9_~]+)\s*\(([^)]*)\)`)
	// Improved member regex: handles types with spaces/stars and different names
	memberRegex := regexp.MustCompile(`^\s*([A-Za-z0-9_]+(?:\s*\*+)?)\s+([A-Za-z0-9_]+)\s*(?:\[[^\]]*\])?\s*;`)

	err := filepath.Walk(root, func(path string, info os.FileInfo, err error) error {
		if err != nil || info.IsDir() || !strings.HasSuffix(path, ".h") {
			return nil
		}

		file, err := os.Open(path)
		if err != nil {
			return nil
		}
		defer file.Close()

		var currentClass *Class
		scanner := bufio.NewScanner(file)
		for scanner.Scan() {
			line := scanner.Text()
			
			if matches := classRegex.FindStringSubmatch(line); matches != nil {
				name := matches[1]
				base := ""
				if len(matches) > 2 {
					base = matches[2]
				}
				if _, ok := classes[name]; !ok {
					classes[name] = &Class{
						Name:    name,
						Base:    base,
						Methods: make(map[string]string),
						Path:    path,
					}
				}
				currentClass = classes[name]
			}

			if currentClass != nil {
				if matches := methodRegex.FindStringSubmatch(line); matches != nil {
					methodName := matches[1]
					currentClass.Methods[methodName] = strings.TrimSpace(line)
				} else if matches := memberRegex.FindStringSubmatch(line); matches != nil {
					typeName := matches[1]
					memberName := matches[2]
					size := sizeOf(typeName)
					currentClass.Members = append(currentClass.Members, Member{
						Name: memberName,
						Type: typeName,
						Size: size,
					})
				}
			}
		}
		return nil
	})

	// Post-process offsets
	for _, c := range classes {
		calculateOffsets(c, classes)
	}

	return classes, err
}

func sizeOf(typeName string) int {
	typeName = strings.TrimSpace(typeName)
	if strings.Contains(typeName, "*") {
		return 4
	}
	switch typeName {
	case "long", "unsigned long", "ULong", "int", "uint", "Fixed", "Ref", "RefArg", "TObjectId", "VAddr", "TTime", "TTimeout", "NewtonErr":
		return 4
	case "short", "unsigned short", "UShort":
		return 2
	case "char", "unsigned char", "Byte", "Boolean":
		return 1
	case "TUPort", "TUTask": // Specific complex types seen in headers
		return 8 // Minimal guess for these objects
	default:
		// Check for T prefix (likely a class/struct)
		if strings.HasPrefix(typeName, "T") || strings.HasPrefix(typeName, "C") {
			return 4 // Most are pointers or small objects
		}
		return 4
	}
}

func calculateOffsets(c *Class, all map[string]*Class) {
	startOffset := uint64(4) // Start after VTable
	if c.Base != "" && c.Base != "SingleObject" {
		if baseClass, ok := all[c.Base]; ok {
			calculateOffsets(baseClass, all)
			if len(baseClass.Members) > 0 {
				last := baseClass.Members[len(baseClass.Members)-1]
				startOffset = last.Offset + uint64(last.Size)
			}
		}
	}

	for i := range c.Members {
		// Align to 4 bytes if size is 4 or 8
		if c.Members[i].Size >= 4 {
			if startOffset % 4 != 0 {
				startOffset += (4 - (startOffset % 4))
			}
		}
		c.Members[i].Offset = startOffset
		startOffset += uint64(c.Members[i].Size)
	}
}
