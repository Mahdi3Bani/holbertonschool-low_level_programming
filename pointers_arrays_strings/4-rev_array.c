#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: global var
 * @n: global var
 *
 */
void reverse_array(int *a, int n)
{


int i, j;

j = 0;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}

}
