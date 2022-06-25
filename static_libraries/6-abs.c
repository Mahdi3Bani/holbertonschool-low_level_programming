#include "main.h"

/**
 * _abs - be positive
 *
 * @n: the global variable
 *
 * Return: Always n
 */
int _abs(int n)
{
if (n < 0)
	n = n * (-1);
return (n);
}
