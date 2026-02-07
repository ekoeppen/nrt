package main

import (
	"bufio"
	"fmt"
	"os"
	"path/filepath"
	"strings"
	"unicode"
)

func main() {
	inFile := "intermediate/globals.cpp"
	outDir := "intermediate"

	f, err := os.Open(inFile)
	if err != nil {
		fmt.Fprintf(os.Stderr, "Error opening file: %v\n", err)
		os.Exit(1)
	}
	defer f.Close()

	scanner := bufio.NewScanner(f)
	// Increase buffer size for long assembly blocks
	const maxCapacity = 10 * 1024 * 1024
	buf := make([]byte, maxCapacity)
	scanner.Buffer(buf, maxCapacity)

	var currentBlock []string
	var currentSymbol string

	// Map to track opened files to add headers
	openedFiles := make(map[string]*os.File)
	defer func() {
		for _, f := range openedFiles {
			f.Close()
		}
	}()

	fmt.Println("Starting split of intermediate/globals.cpp...")

	for scanner.Scan() {
		line := scanner.Text()

		// Start tracking lines for a function block
		if strings.Contains(line, "/**") {
			currentBlock = []string{line}
			currentSymbol = ""
			continue
		}

		// If we are currently inside a block
		if len(currentBlock) > 0 {
			currentBlock = append(currentBlock, line)

			if strings.Contains(line, " * Symbol: ") {
				parts := strings.SplitN(line, "Symbol: ", 2)
				if len(parts) > 1 {
					currentSymbol = strings.TrimSpace(parts[1])
					// Handle names like "reverse(unsigned char *)" by taking the name part
					if idx := strings.IndexAny(currentSymbol, " ("); idx != -1 {
						// But for the first character, it doesn't matter if we take the whole thing
					}
				}
			}

			// End of function block
			if line == "}" {
				if currentSymbol != "" {
					firstChar := rune(currentSymbol[0])
					bucket := strings.ToLower(string(firstChar))
					
					if !unicode.IsLetter(firstChar) && firstChar != '_' {
						bucket = "other"
					}

					fileName := fmt.Sprintf("globals_%s.cpp", bucket)
					filePath := filepath.Join(outDir, fileName)

					outF, ok := openedFiles[filePath]
					if !ok {
						outF, err = os.Create(filePath)
						if err != nil {
							fmt.Printf("Failed to create %s: %v\n", filePath, err)
							continue
						}
						openedFiles[filePath] = outF
						outF.WriteString("#include \"Newton.h\"\n\n")
					}

					for _, blkLine := range currentBlock {
						outF.WriteString(blkLine + "\n")
					}
					outF.WriteString("\n")
				}
				currentBlock = nil
				currentSymbol = ""
			}
		}
	}

	if err := scanner.Err(); err != nil {
		fmt.Fprintf(os.Stderr, "Error reading file: %v\n", err)
	}

	fmt.Println("Splitting complete.")
}
