#include "main.h"
/**
 * *_strncat - concatenates two strings
 *
 * @dest: pointer of dest
 * @src: pointer of src
 * @n: global var
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		j = j + 1;

	j = 0;

	while (j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);


}
