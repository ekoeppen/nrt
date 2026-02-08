package commands

import (
	"fmt"
	"os"

	"github.com/spf13/cobra"
)

var (
	asmPath     string
	headersPath string
)

var rootCmd = &cobra.Command{
	Use:   "nrt",
	Short: "Newton Reconstruction Toolkit",
	Long:  `NRT is a suite of tools for reverse engineering the Newton OS ROM.`,
	Run: func(cmd *cobra.Command, args []string) {
		cmd.Help()
	},
}

func Execute() {
	if err := rootCmd.Execute(); err != nil {
		fmt.Fprintln(os.Stderr, err)
		os.Exit(1)
	}
}

func init() {
	rootCmd.PersistentFlags().StringVar(&asmPath, "asm", "MP2x00US.s", "Path to the 42MB disassembly file")
	rootCmd.PersistentFlags().StringVar(&headersPath, "headers", "Includes", "Path to the Newton C++ headers directory")
}

func AddCommand(cmd *cobra.Command) {
	rootCmd.AddCommand(cmd)
}
