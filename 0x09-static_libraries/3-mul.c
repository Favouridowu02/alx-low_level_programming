#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argc: Argument counts
 * @argv: Arguments vector
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
	int mult = 1;

	if (argc != 3)
	{
		printf("Error");
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d", mult);
	}
	printf("\n");
	return (0);
}
