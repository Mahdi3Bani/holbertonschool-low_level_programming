#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the output
 */
void _puts_recursion(char *s)
{
int i;

i = 0;
if (s[i] != '\0')
{
putchar(s[i]);
i = i + 1;
_puts_recursion(*s);
}





}
