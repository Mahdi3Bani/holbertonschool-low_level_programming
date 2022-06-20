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

		while (j >= 0)
		{
			j = *s++;
			if (j == c)
				return (s - 1);
			if (j == 0)
				return (NULL);
		}
}
