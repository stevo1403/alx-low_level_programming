#include "main.h"

/**
 * print_last_digit - Prints the last digit
 * @n: integer whose last digit is to be printed
 *
 * Return: last digit of `n`.
 */
int print_last_digit(int n)
{
	int r = n;


	if (r < 0)
		r = -1 * r;
	r = r % 10;
	_putchar('0' + r);
	return (r);
}
