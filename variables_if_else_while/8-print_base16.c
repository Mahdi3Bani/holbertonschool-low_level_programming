#include <stdio.h>

/**
 * main - prints all the numbers of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (c = 97; c < 103; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
