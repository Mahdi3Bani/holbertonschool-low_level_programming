#include "main.h"
/**
 * times_table - prints times table
 *
 */
void times_table(void)
{
	int i;
	int j;

	_putchar(48);
	for (i = 0; i < 9; i++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(48);
	}
	_putchar('\n');
	for (i = 0; i < 10; i++)
	{
		_putchar(48);
		for (j 	= 1; j < 10; j++)
		{
			printf(",  %d", i * 3);

		}
		_putchar('\n');

	}

}