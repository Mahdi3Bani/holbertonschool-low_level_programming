#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: pointer of s
 * Return: the integer
 */
int _atoi(char *s)
{
	int i, j, p, n, c;

	n = 0;
	p = 1;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
		j = j + 1;

	for (i = j - 1; i >= 0; i--)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			c = s[i] - 48;
			n = n + (c * p);
			p = p * 10;
			if (s[i - 1] == '-')
			{
			n = n * (-1);
			}
		}
	}

return (n);
}
