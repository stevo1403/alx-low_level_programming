#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: an integer representing the character to be checked
 *
 * Description: The function checks if character `c` is a lowercase alphabet
 * Return: 1 if `c` is lowercase alphabet else 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
