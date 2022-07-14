#include "main.h"
/**
<<<<<<< HEAD
 * add - printing numbers until 98
=======
 * print_to_98 - printing numbers until 98
>>>>>>> ef22afe81598a58b339a37cbdb750bd7835c0240
 * @n: global var
 * Return: s
 */
void print_to_98(int n)
{
<<<<<<< HEAD
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
=======
	int i;

	if (n != 98)
	{
	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);

		}
	}
	printf("98\n");
	}
	else
		printf("98\n");
>>>>>>> ef22afe81598a58b339a37cbdb750bd7835c0240
}
