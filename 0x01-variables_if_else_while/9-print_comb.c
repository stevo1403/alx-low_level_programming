#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point for the application.
 *
 * Return: The program exit code(0)
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57){
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
