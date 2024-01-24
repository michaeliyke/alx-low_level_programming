# 0x1C. C - Makefiles

![Make File Gif](./giphy-2.gif)

> This project was on ...
C - Makefiles

## Background Context

### How make Processes a Makefile

make reads the makefile in the current directory and begins by processing the first rule. In
the example, this rule is for relinking edit; but before make can fully process this rule, it
must process the rules for the files that edit depends on, which in this case are the object
files. Each of these files is processed according to its own rule. These rules say to update
each ‘.o’ file by compiling its source file. The recompilation must be done if the source file,
or any of the header files named as prerequisites, is more recent than the object file, or if
the object file does not exist.

The other rules are processed because their targets appear as prerequisites of the goal.
If some other rule is not depended on by the goal (or anything it depends on, etc.), that
rule is not processed, unless you tell make to do so (with a command such as make clean).

nd header files. This makefile does not specify anything to be done for them—the ‘.c’
and ‘.h’ files are not the targets of any rules—so make does nothing for these files. But
make would update automatically generated C programs, such as those made by Bison or
Yacc, by their own rules at this time.
After recompiling whichever object files need it, make decides whether to relink edit.
This must be done if the file edit does not exist, or if any of the object files are newer than
it. If an object file was just recompiled, it is now newer than edit, so edit is relinked.

Thus, if we change the file insert.c and run make, make will compile that file to update
insert.o, and then link edit. If we change the file command.h and run make, make will
recompile the object files kbd.o, command.o and files.o and then link the file edit.

## Environment

- Language: C
- OS: Ubuntu 20.04 LTS
- Compiler: gcc 9.3.0, GNU make 4.2.1
- Style guidelines: [Betty and Betty Docs](https://github.com/alx-tools/W3C-Validator)

## Files

- main.c
- kbd.c
- command.c
- display.c
- insert.c
- search.c
- files.c
- utils.c

<!-- markdownlint-disable-next-line -->
#### Credits

Work is owned and maintained by [Michael C. Iyke](https://github.com/michaeliyke).

## Acknowledgement

All work contained in this project was completed as part of the curriculum for Alx. ALX is a leading technology training provider, built to accelerate the careers of young Africans through the technology and professional skills that enable them to thrive in the digital economy. The program prepares students for careers in the tech industry using project-based peer learning. For more information, [visit](https://www.alxafrica.com/).
