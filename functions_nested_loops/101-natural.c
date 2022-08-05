#include <stdio.h>

/**
 * main - prints the sum multiples of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int mul3, mul5, s;
	int i;

	mul3 = 0;
	mul5 = 0;
	s = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			mul3 = mul3 + i;
		} else if ((i % 5) == 0)
		{
			mul5 = mul5 + i;
		}
	}
	s = mul3 + mul5;
	printf("%lu\n", s);
	return (0);
}
