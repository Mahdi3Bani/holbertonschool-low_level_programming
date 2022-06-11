#include "main.h"
/**
 * print_to_98 - printing numbers until 98
 * @n: global var
 * Return: s
 */
void print_to_98(int n)
{
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
}
