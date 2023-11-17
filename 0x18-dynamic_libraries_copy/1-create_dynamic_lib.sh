#!/bin/bash

# compile all into their individual .o files
gcc -c -fPIC *.c

# Compile all .o files into a single .so linux library file file
gcc -shared -o liball.so *.o
