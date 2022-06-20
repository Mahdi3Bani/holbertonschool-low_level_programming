#include "main.h"
/**
 * _pow_recursion - returns the factorial of a given number
 * @x: the number
 * @y: the pow
 * Return: factorial of n
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
return (1);
else if (y > 0)
return (x * (x * _pow_recursion(x, y - 1)));
else
return (1 / (x * _pow_recursion(x, y - 1)));
}
