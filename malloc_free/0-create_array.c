#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - creates an array of chars,
 * @size: size of the array
 * @c: char to initialize the array
 *
 * Return: pointer to the array Success, NULL Error
 */
char *create_array(unsigned int size, char c)
{
char *p;
int i = 0;

if (size == 0)
return (NULL);
p = (char *) malloc(size * sizeof(char));
while (i < size)
{
p[i] = c;
i++;
}

p[i] = '\0';

return (p);







}