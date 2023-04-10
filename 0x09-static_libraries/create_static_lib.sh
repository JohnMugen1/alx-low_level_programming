#!/bin/bash
#Compile all .c files in the current directory into .o files
gcc -Wall -Werror -Wextra -pedantic -c *.c

#Create the static library from the .o files
ar rcs liball.a *.o

#Clean up the .o files
rm *.o
