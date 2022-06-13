#include "main.h"
/**
 * print_rev - prints a rev string, followed by a new line, to stdout
 *
 * @str: poitner of str
 */
void print_rev(char *s)
{
int i;
char a[65];

a = " ";
for (i = 0; s[i] != '\0'; ++i)
	a = s[i] + a;

for (i = 0; a[i] != '\0'; ++i)
{
_putchar(a[i]);
}
_putchar('\n');


}
