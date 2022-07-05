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

/**
 * print_alphabet_x10 - print the alphabets ten times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
	}
}
