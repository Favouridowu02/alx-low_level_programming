#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: the character to be printed
 *
 * Return: returns 0
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
