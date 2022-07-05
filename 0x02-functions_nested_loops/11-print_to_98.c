#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from `n` to 98, followed by a new line.
 * @n: the start
 * 
 * Return: Nothing
 */
void print_to_98(int n)
{
	long int i;

	if (n > 98)
		i = -1;
	else
		i = 1;

	while (1)
	{
		
		printf("%d", n);
		if (n == 98)
			break;
		putchar(',');
		putchar(' ');
		n += i;
		
	}
	putchar('\n');
}
