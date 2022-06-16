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
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}


	return (dest);




}
