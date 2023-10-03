#include "main.h"

/**
 * _strlen - returns the length of the string
 * @text: the tring to check
 * Return: the length of the string
 */
int _strlen(char *text)
{
	int i = 0;

	while (text[i] != '\0')
		i++;
	return (i);
}
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
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(fd, text_content, _strlen(text_content));
		if (w == -1)
			return (-1);
		close(fd);
	}

	close(fd);
	return (1);
}
