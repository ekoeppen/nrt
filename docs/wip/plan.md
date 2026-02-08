# Implementation Plan

## Scope

The Newton Reconstruction Toolkit (NRT) currently consists of multiple standalone Go binaries. Consolidating them into a single `nrt` tool with subcommands improves usability, discoverability, and maintainability. We will use `spf13/cobra` for the CLI implementation and refactor existing commands into subcommand handlers.

## Goal

### Objective

Create an umbrella command line tool `nrt` that encapsulates all existing reconstruction tools as subcommands.

### Success criteria

The `nrt` binary is built and installed, and commands like `nrt scaffold`, `nrt analyze`, etc., work as expected.

## Design

### Decisions

- Use `spf13/cobra` for CLI subcommand management.
- Refactor each tool's logic from `main()` to a `Run` function in its own package.
- Move subcommand implementations to `pkg/commands/<toolname>`.
- Use `nrt` as the primary binary name.

### Packages

- `newton/reconstructor/cmd/nrt`: The main entry point.
- `newton/reconstructor/pkg/commands/<name>`: Individual subcommand implementations.
- `newton/reconstructor/pkg/asm`: Existing assembly parsing logic.
- `newton/reconstructor/pkg/analysis`: Existing analysis logic.

### Functions

- Root command setup in `cmd/nrt/main.go`.
- Subcommand registration in `pkg/commands`.
- Refactor existing tools to expose a `Run` function instead of `main`.

### Structures

- `cobra.Command` instances for each tool.
- Shared configuration struct for common flags (e.g., ASM path, headers path).

## Steps

### [x] Add CLI dependencies

#### Precondition

Go environment is set up.

#### Action

Add `github.com/spf13/cobra` and `github.com/spf13/pflag` to `go.mod`.

#### Result

Dependencies are added to the project.

#### Verification

Check go.mod and go.sum.

### [x] Initialize root command

#### Precondition

Dependencies are added.

#### Action

Create `pkg/commands/root.go` and `cmd/nrt/main.go` to initialize the Cobra root command.

#### Result

Base `nrt` command is functional (though empty).

#### Verification

Build and run `nrt --help`.

### [x] Refactor tools into subcommands

#### Precondition

Root command is initialized.

#### Action

One by one, refactor existing tools (e.g., scaffolder, analyzer) into subcommand packages in `pkg/commands/` and register them with the root command.

#### Result

Individual tools are available as `nrt <subcommand>`.

#### Verification

Run `nrt <subcommand> --help` for each refactored tool.

### [x] Create Taskfile.yml

#### Precondition

Refactoring is complete.

#### Action

Create a `Taskfile.yml` in the project root to build and install the `nrt` tool.

#### Result

Functional Taskfile for building and installing `nrt`.

#### Verification

Run `task install` and check if `nrt` is in the path.

