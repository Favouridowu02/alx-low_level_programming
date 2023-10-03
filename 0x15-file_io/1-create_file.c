#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to creat
 * @text_content: The text content to be inserted
 *
 * Return: returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	w = write(fd, text_content, sizeof(text_content));
	if (fd == -1 || w == -1 || text_content == NULL)
		return (-1);
	close(fd);
	return (1);
}
