#include "main.h"
#include <fcntl.h>
/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: The file name of pathname
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print or returns
 * 0 on error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (w);
}
