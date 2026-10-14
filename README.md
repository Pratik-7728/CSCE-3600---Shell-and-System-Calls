# Major_1 Assignment: Bitwise Operations
**Course:** CSCE 3600: Systems Programming
**Term:** Fall 2026
**Group** Group 14
**Environment:** UNT CSE CELL (`cell01.cse.eng.unt.edu` - `cell20.cse.eng.unt.edu`)

---------------------------------------------------------
## Description
This Assignment is a menu-driven C program that runs bitwise operations on 32-bit unsigned integer. All the functions nly use bitwise operators and no other libraries.
The project is split into separate C source files according to the functions and are tied together in a main menu driver.

Since the team only had 2 members, we implemented two functions:
1. Count leading to Zeroes(clz.c): Checks the 32 bit integer and counts how many zero bits appear at the front.
2. Rotate Right(rotate.c): Shifts the 32 bit integer to the right by any amount given between 0 and 31.
---------------------------------------------------------
## Group Members and Contribution
| Member Name | UNT EUID/ email | Functions | 
|---|---|---|
| Pratik Baidhya | PB0974 | rotate.c, major1.c |
| Radheshyam Shrestha | RS1959 | clz.c |

## Project Structure
```text
major_1/
├── Makefile       # Compilation script supporting all and clean targets
├── README.md      # Project documentation, group details, and instructions
├── major1.h       # Shared header file containing declarations and prototypes
├── major1.c       # Main program driver containing menu display and input validation
├── clz.c          # Module: Count Leading Zeroes implementation
└── rotate.c       # Module: Rotate-right implementation
