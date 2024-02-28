# 0x1C. C - Makefiles

## Description

This project is a series of tasks related to Makefiles in C programming. It covers creating Makefiles, understanding rules, variables, and implementing a complete Makefile.

## Tasks

### Task 0: make -f 0-Makefile

Create your first Makefile.

- **Requirements:**
  - Name of the executable: school
  - Rules: all
  - The all rule builds your executable
  - Variables: none

```bash
make -f 0-Makefile
Task 1: make -f 1-Makefile
Create a Makefile with compiler and source file variables.

Requirements:
Name of the executable: school
Rules: all
The all rule builds your executable
Variables: CC, SRC
bash
Copy code
make -f 1-Makefile
Task 2: make -f 2-Makefile
Create a more useful Makefile with object files.

Requirements:
Name of the executable: school
Rules: all
The all rule builds your executable
Variables: CC, SRC, OBJ, NAME
bash
Copy code
make -f 2-Makefile
Task 3: make -f 3-Makefile
Enhance the Makefile with additional rules for cleaning.

Requirements:
Name of the executable: school
Rules: all, clean, oclean, fclean, re
Variables: CC, SRC, OBJ, NAME, RM
bash
Copy code
make -f 3-Makefile
Task 4: A complete Makefile
Create a complete Makefile with additional compiler flags.

Requirements:
Name of the executable: school
Rules: all, clean, oclean, fclean, re
Variables: CC, SRC, OBJ, NAME, RM, CFLAGS
bash
Copy code
make -f 4-Makefile
How to Run
For each task, you can run the associated Makefile using the following command:

bash
Copy code
make -f <Makefile_name>
Replace <Makefile_name> with the actual name of the Makefile for the task.
