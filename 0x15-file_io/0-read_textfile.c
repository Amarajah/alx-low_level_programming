#include "main.h"
#include <unistd.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: filename
 * @letters: letters of the file
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file = fopen(filename, "r");

	if (file == NULL) {
		return (0);
	}

	for (size_t i = 0; i < letters; i++) {
		char c = fgetc(file);
		if (c == EOF) {
			break;
		}
		 write(1, &c, 1);
	}
	fclose(file);
	return letters;
}
