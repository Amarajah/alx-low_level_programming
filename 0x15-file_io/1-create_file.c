#include "main.h"
#include <unistd.h>

/**
 * create_file - function that creates a file
 * @filename: Filename
 * @text_content: text content
 * Return: 1 on success, -1 on failure
 * if text_content is NULL create an empty file
 * if filename is NULL return -1
 * if the file already exists, truncate it
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, rstatus, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rstatus = write(fd, text_content, i);
		if (rstatus == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
