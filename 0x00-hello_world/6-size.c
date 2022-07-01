#include <stdio.h>

/**
 * main - Entry point for the application
 *
 * Return: The program's exit code
*/
int main(void)
{
	char c = 'c';
	int n = 50;
	long int ln = 50 * 5;
	long long int lln = 500 * 500;
	float fn = 500.5;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(n));
	printf("Size of a long int: %lu byte(s)\n", sizeof(ln));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lln));
	printf("Size of a float: %lu byte(s)\n", sizeof(fn));
	return (0);
}

