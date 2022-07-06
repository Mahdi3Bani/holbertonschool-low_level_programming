#include "main.h"
/**
 * _isdigit - checking the alphabetic
 *
 * @c: is the global variable
 *
 * Return: 1 if true and 0 if false
 */
int _isdigit(int c)
{

	if (c >= 48  && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
