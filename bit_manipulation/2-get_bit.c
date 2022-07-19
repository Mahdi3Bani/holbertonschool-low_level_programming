#include "main.h"
/**
 * get_bit - print value of a bit at a given index
 * @n: Number to check
 * @index: num pos
 * Return: A value at a given index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 32)
		return (-1);

	while (i < index)
	{
		n = n >> 1;
		i++;
	}
	return ((n & 1));
}
