#include "main.h"

int cp(const char *file_from, const char *file_to);
/**
 * main - check the code
 * @ac: argument count
 * @av: argument vector
 *
 * Return:  Always 0
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		exit(97);
		printf("Usage: cp file_from file_to\n");
	}
	cp(av[1], av[2]);
	return (0);
}

/**
 * cp - a program that copies the content of a file to another file
 * @file_from: the file to copy from
 * @file_to: the file to copy to
 *
 * Return: returns 1 on success and -1 on failure
 */
int cp(const char *file_from, const char *file_to)
{
	int fd, fp, r, w, c, e;
	char buffer[1024];

	if (file_from == NULL)
	{
		exit(98);
		printf("Error: Can't read from file %s\n", file_from);
		return (-1);
	}
	fd = open(file_from, O_RDONLY | O_TRUNC);
	fp = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	r = read(fd, buffer, 1024);
	if (r == -1 || fd == -1)
	{
		exit(98);
		printf("Error: Can't read from file %s\n", file_from);
		return (-1);
	}
	w = write(fp, buffer, 1024);
	if (fp == -1 || w == -1)
	{
		exit(99);
		printf("Error: Can't write to %s", file_to);
		close(fd);
		return (-1);
	}
	c = close(fd);
	e = close(fp);
	if (c == -1)
	{
		exit(100);
		printf("Error: Can't close fd %d", c);
		return (-1);
	}
	if (e == -1)
	{
		exit(100);
		printf("Error: Can't close fd %d", e);
		return (-1);
	}
	return (1);
}
