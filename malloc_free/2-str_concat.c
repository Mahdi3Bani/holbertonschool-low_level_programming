#include "main.h"
/**
 * *str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int len, l1, l2, i, j;

if (s1 == NULL)
l1 = 0;
else
l1 = strlen(s1);
if (s2 == NULL)
l2 = 0;
else
l2 = strlen(s2);
len = l1 + l2 + 1;
s = malloc(len);
if (s == NULL)
return (NULL);
i = 0;
while (i < l1)
{
s[i] = s1[i];
i++;
}
j = 0;
while (j < l2)
{
s[i] = s2[j];
i++;
j++;
}
s[i] = '\0';

return (s);
}
