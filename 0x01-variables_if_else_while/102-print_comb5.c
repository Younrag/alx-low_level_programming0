#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 48; m < 58; m++)
		{
			for (p = 48; p < 58; p++)
			{
				for (l = 48; l < 58; l++)
				{
					if ((m < l && n == p) || n < p)
					{
						putchar(n);
						putchar(m);
						putchar(' ');
						putchar(p);
						putchar(l);
					if (n != 57 || m != 56 || p != 57 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
