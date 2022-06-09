#include "main.h"
/**
 * print_sign - checking the sign
 *
 * @n: is the global variable
 *
 * Return: 1 if positive and 0 if null and -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}



}
