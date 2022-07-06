#include "main.h"
/**
 * _strcmp - comapres two string
 * @s1: pointer of s1
 * @s2: pointer of s2
 * Return: if 0 they r eaqual , else they'r not.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

return (*s1 - *s2);

}
