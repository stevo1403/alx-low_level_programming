#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: integer whose absolute is to be computed
 *
 * Return: absolute value of `n`.
 */
int _abs(int n)
{
	int r = n;

	if (r >= 0)
		return (r);
	r = -1 * n;
	return (r);
}
