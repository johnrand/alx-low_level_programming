#!/bin/bash

# Compile all .c files into .o files
gcc -Wall -Werror -Wextra -pedantic -c -fPIC *.c

# Create a dynamic library from all .o files
ar -shared -o liball.so *.o

# remove the object files creted
rm *.o
