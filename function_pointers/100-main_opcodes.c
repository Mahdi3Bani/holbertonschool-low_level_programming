#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int a;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}
}
