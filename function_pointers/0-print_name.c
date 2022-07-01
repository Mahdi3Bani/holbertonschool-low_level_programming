#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name : name to print
 * @f: function that prints the name
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
return;
if (f == NULL)
return;
f(name);





}
