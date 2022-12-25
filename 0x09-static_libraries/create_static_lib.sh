#!/bin/bash

# Create an empty archive file called liball.a
ar rcs liball.a

# Loop through all the .c files in the current directory
for file in ./*.c
do
	# Compile each .c file into an object file
	gcc -c $file

	# Add the object file to the archive
	ar rcs liball.a *.o
done

# Remove all the object files
rm *.o
