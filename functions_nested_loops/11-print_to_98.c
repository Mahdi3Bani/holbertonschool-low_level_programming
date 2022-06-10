#include "main.h"
/**
 * add - printing numbers until 98
 * @n: global var
 * Return: s
 */
void print_to_98(int n)
{
int i;

if (n > 98)
{
	for (i = n; i = 99; i--)
	{	
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(' ');
		_putchar(',');
}
}
else
{
for (i = n; i = 97; i++)
{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0'); 
		_putchar(' ');
		_putchar(',');

}
}
printf(' 98\n');
}
