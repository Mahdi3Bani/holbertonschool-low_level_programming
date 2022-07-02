#include "3-calc.h"
/**
 * op_add - return sum of 2 var
 * @a: var
 * @b: var
 * Return: sum
 */
int op_add(int a, int b)
{
int sum;

sum = a + b;
return (sum);
}
/**
 * op_sub - returns the difference of 2 var
 * @a: var
 * @b: var
 * Return: diff
 */
int op_sub(int a, int b)
{
int diff;

diff = a - b;
return (diff);

}
/**
 * op_mul - returns the product of 2 var
 * @a: var
 * @b: var
 * Return: mul
 */
int op_mul(int a, int b)
{
int mul;

mul = a * b;
return (mul);
}
/**
 * op_div - returns the result of the division of 2 var
 * @a: var
 * @b: var
 * Return: div
 */
int op_div(int a, int b)
{
int div;

div = a / b;
return (div);
}
/**
 * op_mod - returns the remainder of the division of 2 var
 * @a: var
 * @b: var
 * Return: mod
 */
int op_mod(int a, int b)
{
int mod;

mod = a % b;
return (mod);
}
