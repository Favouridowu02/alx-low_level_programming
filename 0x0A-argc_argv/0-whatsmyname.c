#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
