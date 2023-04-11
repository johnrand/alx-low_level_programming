#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a static library from all .o files
ar -rc liball.a *.o
ranlib liball.a
