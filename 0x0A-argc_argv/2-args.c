#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: Argument count
 * @argv: Argument Vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
