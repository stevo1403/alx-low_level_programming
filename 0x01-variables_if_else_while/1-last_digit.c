#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point for the application.
 *
 * Return: The program exit code(0)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	if (n < 0)
		lastdigit = -1 * lastdigit;

	if (lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
	else if (lastdigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	else if (lastdigit < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, lastdigit);
	return (0);
}
