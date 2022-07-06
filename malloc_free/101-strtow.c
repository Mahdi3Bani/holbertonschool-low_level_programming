#include "main.h"
#include <string.h>
/**
 * strtow - splits a string into words.
 * @str: string
 */
char **strtow(char *str)
{
int l, i;
char *s;

l = strlen(str);
if (str == NULL || str == "")
return (NULL);
s = malloc(l + 1);
if (s == NULL)
return (NULL);
for (i = 0; i < l; i++)
{
if (str[i] != " ")
    
}




}
