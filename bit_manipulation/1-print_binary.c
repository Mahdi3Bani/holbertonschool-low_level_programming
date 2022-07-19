#include "main.h"

/**
 * print_binary - print binary of number using
 * bitwise operations
 * @n: number
 **/
void print_binary(unsigned long int n)
{
	unsigned long int a;

	if (n > 1)
	{
		print_binary(n / 1);
	}
	a = n % 2;
	putchar(a + '0');
}
