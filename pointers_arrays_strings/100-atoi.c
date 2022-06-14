#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: pointer of s
 * Return: the integer
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] > '0' && s[i] < '9')
		{
			if (s[i - 1] == '-')
			{
			return (s[i - 1]);
			return (s[i]);
			}
			else
				return (s[i]);
		}
	}





}
