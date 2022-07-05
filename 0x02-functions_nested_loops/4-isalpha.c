#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: an integer representing the character to be checked
 *
 * Description: The function checks if character `c` is an alphabet
 * Return: 1 if `c` is lowercase alphabet else 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
