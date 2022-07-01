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

	for (i = 97; i <= 122; i++)
		if ((char)i != 'q' && (char)i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
