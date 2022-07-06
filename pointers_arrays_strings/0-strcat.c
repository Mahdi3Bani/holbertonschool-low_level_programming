#include "main.h"
/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer of dest
 * @src: pointer of src
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
		j = j + 1;

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);


}
