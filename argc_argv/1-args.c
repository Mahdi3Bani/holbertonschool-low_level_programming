#include "stdio.h"
/**
 * main - print its name
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
	printf("%d", i);
}

	return (0);
}
