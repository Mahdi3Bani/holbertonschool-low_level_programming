#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer of str
 */
void puts_half(char *str)
{
	int i, j;

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
		j = j + 1;

	if (j % 2 == 0)
	{
	for (i = j / 2; i < j; i++)
		_putchar(str[i]);
	}
	else
	{
		for (i = (j / 2) - 1; i < j; i++)
			_putchar(str[i]);
	}
	_putchar('\n');





}
