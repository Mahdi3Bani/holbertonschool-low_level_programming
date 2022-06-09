#include "main.h"
/**
 * print_last_digit - print the last digit (this is obvious )
 *
 * @n: is the global variable
 *
 * Return: a
 */
int print_last_digit(int n)
{
	int a;
	a = n % 10;
	if (a < 0)
		a = a * (-1);
	_putchar(a + '0');
	return (a);


}
