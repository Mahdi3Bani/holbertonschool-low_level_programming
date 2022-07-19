#include "main.h"

/**
 * show_mem_rep - show bytes in memory, from location start to start+n
 *
 * @start: start
 * @n: n
 */

void show_mem_rep(char *start, int n)
{
	int i;

	for (i = 0; i < n; i++)
		putchar(start[i] + '0');
	putchar("\n");
}

/**
 * get_endianness - checks the endianness.
 *Return: 0
 */
int get_endianness(void)
{

	int i = 0x01234567;

	show_mem_rep((char *)&i, sizeof(i));
	getchar();
	return (0);
}
