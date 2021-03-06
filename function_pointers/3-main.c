#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
int r;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(1);
}

f = get_op_func(argv[2]);
if (!f)
{
printf("Error\n");
exit(1);
}
r = f(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", r);
return (0);

}
