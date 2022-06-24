#include "stdio.h"
/**
 * main - print its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int i, j;

j = 0;
for (i = 0; i < argc; i++)
{
	j = j + 1;
}

	printf("%d\n", j);
	return (0);
}
