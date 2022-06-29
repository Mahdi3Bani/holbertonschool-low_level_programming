#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: min
 * @max: max
 * Return: s
 */
int *array_range(int min, int max)
{
int *s, size, i;

if (min > max)
return (NULL);

size = max - min;
s = malloc(sizeof(int) * size);
if (s == NULL)
return (NULL);
i = 0;
while (min <= max)
{
s[i] = min++;
i++;
}
return (s);
}
