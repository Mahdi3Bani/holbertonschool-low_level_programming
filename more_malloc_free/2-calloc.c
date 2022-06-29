#include "main.h"
/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: number of element
 * @size: size of type
 * Return: memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
if ((nmemb == 0) || (size == 0))
return (NULL);

s = malloc(size * nmemb);
if (s == NULL)
return (NULL);
memset(s, 0, nmemb * size);
return (s);


}
