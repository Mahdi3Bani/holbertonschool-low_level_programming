#include "stdio.h"
/**
 * main - print its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%d\n", i);
}

	return (0);
}
