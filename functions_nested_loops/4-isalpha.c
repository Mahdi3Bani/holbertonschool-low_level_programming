#include "main.h"
/**
 * _isalpha - checking the alphabetic
 *
 * @c: is the global variable
 *
 * Return: 1 if true and 0 if false
 */
int _isalpha(int c)
{

	if ((c > 'a'  && c < 'z') || (c > 'A'  && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
