#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer of str
 */
void puts_half(char *str)
{
	int i, j, c;

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
		j = j + 1;

	c = j / 2;
	for (i = c; i < j; i ++)
		_putchar(str[i]);
	_putchar('\n');





}
