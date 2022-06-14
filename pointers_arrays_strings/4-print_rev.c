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
	for (i = 0; s[i] != '\0'; ++i)
		j = j + 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');


}
