#include "main.h"
/**
 * print_triangle - draws a triangle line on the terminal
 *
 * @size: global var
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (j = 0; j <= size; j++)
		{
			for (i = 1; i <= size; i++)
				if (i <= (size - j))
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');


}
