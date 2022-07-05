#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int a, b, c, d;
	char result[4];

	a = '0';
	b = 0;
	c = 0;

	while (1)
	{
		if (c == 10)
		{
			c = 0;
			b++;
			_putchar('\n');
		}
		if (b > 9)
			break;

		if (c == 0 || b == 0)
			d = 0;
		else
			d = b * c;
		if (d < 9)
		{
			_putchar(a + d);
		}
		else
		{
			tostring(result, d);
			print_string(result);
		}
		if (c < 9)
		{
			_putchar(',');
			_putchar(' ');
			if (d < 9)
				_putchar(' ');
		}

		c += 1;

	}
}
/**
 * print_string - Prints out a string
 * @str: the string to be printed
 *
 * Return: Nothing
 */
void print_string(char str[])
{
	int e;

	for (e = 0; e < 4; e++)
	{
		if (str[e] == '\0')
			break;
		_putchar(str[e]);
	}
}
/**
 * tostring - Convert number to string
 * @str: the array to store the string
 * @num: the number to be converted
 *
 * Description: Converts number into string
 *
 * Return: Nothing
 */
void tostring(char str[], int num)
{
	int i, rem, len = 0, n;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}
	str[len] = '\0';
}
