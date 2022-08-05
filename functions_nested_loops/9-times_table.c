#include "main.h"
/**
 * times_table - prints times table
 *
 */
void times_table(void)
{
	int i;
	int j;

	putchar(48);
	for (i = 0; i < 9; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(' ');
		putchar(48);
	}
	putchar('\n');
	for (i = 0; i < 10; i++)
	{
		putchar(48);
		for (j 	= 1; j < 10; j++)
		{
			printf(",  %d", i * 3);

		}
		putchar('\n');

	}

}