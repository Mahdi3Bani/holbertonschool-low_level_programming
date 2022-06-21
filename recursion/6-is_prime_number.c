#include "main.h"
int prime(int n, int i);
/**
 * prime - find the prime number
 * @n: global var
 * @i: global var
 * Return: 0 or -1
 */
int prime(int n, int i)
{
if (i >= (n / 2))
return (1);
if ((n % i) == 0)
return (0);
else
return (prime(n, i + 1));




}







/**
 * is_prime_number - returns 1 if the integer is a prime number,return 0
 * @n: the input int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
int i = 1;

if (n == 1 || n == 0 || n == -1)
return (0);
else
return (prime(n, i + 1));




}
