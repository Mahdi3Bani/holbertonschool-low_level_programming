#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the separator
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *s;
va_list args;
va_start(args, n);

for (i = 1; i <=  n; i++)
{
s = va_arg(args, char *);
if (s != NULL)
printf("%s", s);
else
printf("(nil)");
if (separator != NULL && i i != n)
printf("%s", separator);
}
printf("\n");
va_end(args);
}
