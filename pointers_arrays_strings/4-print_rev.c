#include "main.h"
/**
 * print_rev - prints a rev string, followed by a new line, to stdout
 *
 * @s: poitner of s
 */
void print_rev(char *s)
{
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
		j = j + 1;

	for (i = j - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
