#include "main.h"
/**
 * print_square - draws a diagonal line on the terminal
 *
 * @size: global var
 */
void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 1; i <= size; i++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');


}
