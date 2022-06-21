#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

else
return ((n - (n - 1) * _sqrt_recursion(n - 1)));



}
