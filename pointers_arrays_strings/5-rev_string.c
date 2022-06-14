#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer of string
 */
void rev_string(char *s)
{
	int i, j, c;

	for (i = 0; s[i] != '\0'; i++)
		j = j + 1;

	char a;

	c = j - 1;
	for (i = 0; i < j / 2; i++)
	{
		a = s[i];
		s[i] = s[c];
		s[c--] = a;
	}



}
