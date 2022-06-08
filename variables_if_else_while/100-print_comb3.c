#include <stdio.h>
/**
 * main - printing possible different combinations of two digits
 * return 0 (succes)
 */
int main (void)
{
	int i, n;
	for (n = 48; n < 57; n++)
	{
		for (i = 49; i < 58; i++)
		{
			if (i > n)
			{
				putchar(n);
				putchar(i);
				if (n != 56 || i != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
