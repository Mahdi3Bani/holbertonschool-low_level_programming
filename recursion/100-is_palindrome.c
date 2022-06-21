#include "main.h"
int pal(char *s, int i, int n);
int _strlen_recursion(char *s);
/**
 * _strlen_recursion - returns length of string
 * @s: string to count
 * Return: length of s
 **/
int _strlen_recursion(char *s)
{
if (*s != '\0')
return (_strlen_recursion(s + 1) + 1);
else
return (0);




}
/**
 * pal - palindrome
 * @s: pointer
 * @i: global var
 * @n: size of s
 * Return: 1 or 0
 */
int pal(char *s, int i, int n)
{
	if (i == n || i == n - 1)
		return (1);
	if (s[i] == s[n - 1])
		return (pal(s, i + 1, n - 1));
	else
		return (0);
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: pointer of s
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int i = 0;
	int n = 0;


	n = _strlen_recursion(s);
	return (pal(s, i, n));
}
