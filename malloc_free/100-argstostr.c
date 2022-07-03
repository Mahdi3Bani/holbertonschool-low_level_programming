#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: s
 */
char *argstostr(int ac, char **av)
{
int i, j, l, k;
char *s;

if (ac == 0 || av == NULL)
return (NULL);
l = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
l++
}
l++
}
s = malloc(l + 1);
if (s == NULL)
return (NULL)
k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
s[k] = av[i][j];
k++
}
str[k] = '\n';
k++;

}
return (s);
}
