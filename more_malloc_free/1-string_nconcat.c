#include "main.h"
/**
 * *string_nconcat - concatenates two strings.
 * @s1: string1
 * @s2: string2
 * @n: counter
 * Return: s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *s;
unsigned int l, l1, l2, i;

l1 = strlen(s1);
l2 = strlen(s2);
if (n >= l2)
l = l1 + l2;
else
l = l1 + n;
s = malloc(sizeof(char) * (l + 1));
if (!s)
return (NULL);
for (i = 0; i < l; i++)
{
if (i < l1)
s[i] = s1[i];
else
s[i] = s2[i - l1];
}
s [l] = '\0';
return (s);
}
