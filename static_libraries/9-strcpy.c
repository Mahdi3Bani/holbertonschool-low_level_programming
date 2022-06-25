#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
int i, j;

	j = 0;

	j = 0;
	for (i = 0; src[i] != '\0'; i++)
		j = j + 1;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
