#include "main.h"

/**
 * print_alphabet - print all characters in the alphabets
 *
 * Return: Nothing
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
