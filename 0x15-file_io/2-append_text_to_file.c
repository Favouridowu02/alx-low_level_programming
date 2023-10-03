#include "main.h"

/**
 * _strlen - returns the string length
 * @str: the string to be printed
 * Return: returns the string lenght
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: The text to be appended
 * Return: returns 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		w = write(fd, text_content, _strlen(text_content));
		if (w == -1)
			return (-1);
		close(fd);
		return (1);
	}
	close(fd);
	return (-1);
}
