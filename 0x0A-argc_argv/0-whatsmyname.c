#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints its name, followed by a new line
 * @argc: arguments count
 * @argv: arguments vector
 * Returns: Always 0.
 */
int main(int argc, char *argv[])
{
	__attribute__((unused))argc;

	printf("%s\n", argv[0]);
	return (0);
}
