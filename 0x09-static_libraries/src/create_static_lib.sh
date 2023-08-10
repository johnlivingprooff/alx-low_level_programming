#!/bin/bash

# Convert source code to object code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Add all object files to archive - Static library
ar rcs liball.a *.o 

# Add newline
