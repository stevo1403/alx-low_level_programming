#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: integer to be checked.
 *
 * Return: 0 if `n` is 0 OR 1 if `n` is a positive number OR \
 * -1 if `n` is a negative number.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
