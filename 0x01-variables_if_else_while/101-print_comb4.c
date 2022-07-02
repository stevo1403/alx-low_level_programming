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
	int i, j, k;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (i == j)
				continue;

			for (k = '0'; k <= '9'; k++)
			{
				if (j == k || j <= i || k <= i)
					continue;
				if (k > i && k < j)
					continue;
				
				if (i != '0' || j != '1' || k != '2')
				{
					putchar(',');
					putchar(' ');
				}

				putchar(i);
				putchar(j);
				putchar(k);

			}

		}
	}
	putchar('\n');
	return (0);
}
