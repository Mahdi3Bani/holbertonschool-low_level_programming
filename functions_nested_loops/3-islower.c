#include "main.h"
/**
 * main - checking the lower case
 *
 * Return: 1 if true and 0 if false
 */
int _islower(int c)
{

	if (c > 'z' && c < 'a')
		return (0);
	else
		return (1);

}
