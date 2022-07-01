#include <stdio.h>
#include <string.h>

/**
 * main - Entry point for the program
 *
 * Return: The program's exit code. Returns 0 indicating success.
*/
int main(void)
{
	char message[] = "and that piece of art is useful\" - \
Dora Korpar, 2015-10-19\n";

	fwrite(message, strlen(message), sizeof(char), stderr);
	return (1);
}

