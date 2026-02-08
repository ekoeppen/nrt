# Implementation Plan

## Scope

Reconstruct TDoubleQItem and TTaskQItem constructors and any related methods found in intermediate/. These are simple leaf classes used for queue management in the kernel.

## Goal

### Objective

Reconstruct TDoubleQItem and TTaskQItem classes from assembly.

### Success criteria

Source files Sources/OS600/KernelUtility.cpp and header Includes/OS600/KernelUtility.h are created/updated and match the assembly logic.

## Design

### Decisions

Create a new header Includes/OS600/KernelUtility.h for kernel-side utility classes that are not in the public DDK but present in the ROM. Create Sources/OS600/KernelUtility.cpp for implementation.

### Packages

Includes/OS600, Sources/OS600

### Functions

TDoubleQItem::TDoubleQItem(), TTaskQItem::TTaskQItem()

### Structures

class TDoubleQItem { TDoubleQItem* fNext; TDoubleQItem* fPrev; void* fOwner; }; class TTaskQItem { TTaskQItem* fLink; void* fOwner; };

## Steps

### [x] Create KernelUtility.h

#### Precondition

Project structure exists.

#### Action

Create the header file with TDoubleQItem and TTaskQItem definitions.

#### Result

Includes/OS600/KernelUtility.h created.

#### Verification

File exists and contains the classes.

### [x] Create KernelUtility.cpp

#### Precondition

Includes/OS600/KernelUtility.h exists.

#### Action

Implement the constructors for TDoubleQItem and TTaskQItem based on the assembly in intermediate files.

#### Result

Sources/OS600/KernelUtility.cpp created.

#### Verification

Code matches assembly logic.

### [x] Update README.md

#### Precondition

Classes reconstructed.

#### Action

Mark TDoubleQItem and TTaskQItem as completed in the README.md coverage plan.

#### Result

README.md updated.

#### Verification

README.md shows [x] for these classes.

