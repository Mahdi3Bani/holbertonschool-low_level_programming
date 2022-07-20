#include "main.h"

/**
 * clear_bit - clear bit at index to 0
 * @n: number
 * @index: index
 * Return: 1
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > 32)
		return (-1);
	a = ~(1 << index);
	*n = *n & a;
	return (1);
}
