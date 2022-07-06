#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: char
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
int j;
char a;

a = s;
while (*a != '\0' && *a != c)
    a = a + 1;

if (*a != c)
		return (NULL);
	else
		return (a)

}
