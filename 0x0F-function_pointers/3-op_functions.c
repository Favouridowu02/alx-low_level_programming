#include "function_pointers.h"

/**
 * op_add - addition operator
 * @a: the first parameter to bepassed
 * @b: the second parameter to be passed
 *
 * Return: the sum of the two values
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -subtraction operator
 * @a: the first parameter to bepassed
 * @b: the second parameter to be passed
 *
 * Return: the subtraction of the two values
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication operator
 * @a: the first parameter to bepassed
 * @b: the second parameter to be passed
 *
 * Return: the multiplication of the two values
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division operator
 * @a: the first parameter to be passed
 * @b: the second parameter to be passed
 *
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division
 * @a: the first parameter to be passed
 * @b: the second parameter to be passed
 *
 * Return: the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
