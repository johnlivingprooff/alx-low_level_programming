#!/bin/bash
# Create Object files
gcc -c -fPIC *.c
# Creating the dynamic library
gcc -shared -o liball.so *.o

