#include "main.h"
int sqr(int n, int i);
/**
 * sqr - square of number
 * @n: global var
 * @i: global var
 * Return: square of number
 */
int sqr(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	if ((i * i) == n)
		return (i);
	else
		return (sqr(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	if (n < 0)
		return (-1);

	else
		return (sqr(n, i + 1));
}
