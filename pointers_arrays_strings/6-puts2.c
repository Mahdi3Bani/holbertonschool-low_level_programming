#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first
 * @str: the pointer of str
 */
void puts2(char *str)
{

	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		j = j + 1;

	for (i = 0; i < j; i += 2)
		_putchar(str[i]);
	_putchar('\n');



}
