#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: num to convert
 * Return: num
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		num = (2 * num) + (b[i] - '0');
	}

	return (num);
}
