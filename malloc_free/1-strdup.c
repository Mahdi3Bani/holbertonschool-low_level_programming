#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: strng
 * Return: pointer to the duplicated array Success, NULL id str null
 */
char *_strdup(char *str)
{
char *s;
unsigned int i, j;

i = 0;
j = 0;
if (str == NULL)
return (NULL);
else
{
i = strlen(str);
s = malloc((i + 1));
if (s == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
s[j] = str[j];
}
}
return (s);
}
