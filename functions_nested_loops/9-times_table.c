#include "main.h"
/**
 * times_table - prints times table
 *
 */
void times_table(void)
{
	int i;
	int j;
	int a;

	_putchar(48);
	for (i = 0; i < 9; i++)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(48);
	}
	_putchar('\n');
	for (i = 1; i < 10; i++)
	{
		_putchar(48);
		for (j = 1; j < 10; j++)
		{
			a = i * j;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			if (a > 10)
			{

				while (a / 10 != 0)
				{

					_putchar((a % 10) + '0');
					a = a / 10;
				}
			}
			else
			{

				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}
}