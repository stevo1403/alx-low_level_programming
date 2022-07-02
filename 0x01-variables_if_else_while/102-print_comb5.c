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
	int i, j, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (l = '0'; l <= '9'; l++)
				{
					if (k < i)
						continue;
					else if (k == i && l < j)
						continue;

					if (i == k && j == l)
						continue;
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == '9' && j =='8' && k == '9' && l == '9')
						break;
					putchar(',');
					putchar(' ');
				}

			}


		}
	}
	putchar('\n');
	return (0);
}
