#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line
 * @separator: the separator
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
if (va_arg(args, char *) == NULL)
printf("nil");
else
printf("%s", va_arg(args, char *));
if (separator != NULL && i < n -1)
printf("%s", separator);
}
printf("\n");
}
