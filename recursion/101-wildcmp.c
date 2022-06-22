#include "main.h"
int cmp(char *s1, char *s2, int i);
/**
 * cmp - comparison
 * @s1: string 1
 * @s2: string 2
 * @i: integer
 * Return: 0 if not equal otherwise 1.
 */
int cmp(char *s1, char *s2, int i)
{
int a;

if ((s1[i] == '\0') && (s2[i] == '\0'))
return (1);
if (s2[i] == '*')
a = i + 1;
if (s1[i] == s2[a])
return (cmp(s1, s2, i + 1));
else
return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if the strings can be considered identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
int i = 0;

return (cmp(s1, s2, i));
}
