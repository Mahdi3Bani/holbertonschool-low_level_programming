#include "main.h"
/**
 * *_strncpy - copies a string.
 * @dest: pointer of dest
 * @src: pounter of src
 * @n: gobal var
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		j = j + 1;

	j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);




}
