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
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i > j || i == j)
				continue;

			putchar(i);
			putchar(j);

			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
