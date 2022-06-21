#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
int a;

a = n + 1;
if (n < 0)
return (-1);
if (((a - (n - 1)) * (a - (n - 1)) == n))
{
return ((n - (n - 1)));
}
else
_sqrt_recursion((a - (n - 1)));




}
