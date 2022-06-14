#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer of string
 */
void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		j = j + 1;

	char a[j];

	for (i = j - 1; i >= 0; i--)
		a[i - j + 1] = s[i];
	s = a;




}
