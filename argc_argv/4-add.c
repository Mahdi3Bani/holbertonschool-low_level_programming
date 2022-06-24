#include <stdio.h>
#include <stdlib.h>
/**
 * main - add
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int sum, i;

sum = 0;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]))
sum = sum + atoi(argv[i]);
else
{
printf("Error");
return (0);
}
}
printf("%d", sum);
}
}
