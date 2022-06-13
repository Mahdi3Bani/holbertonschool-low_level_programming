#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @s: pointer
 * Return: i
 */
int _strlen(char *s)
{
int i;
int m;

m = 0;
for (i = 0; s[i] != '\0'; ++i)
	m = m + 1;


return (i);
}
