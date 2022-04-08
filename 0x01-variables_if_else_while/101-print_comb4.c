#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;
	int p;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			for (p = 0; p < 10; p++)
			{
				if (p > m && m > n)
				{
					putchar((n % 10) + '0');
					putchar((m % 10) + '0');
					putchar((p % 10) + '0');
					if (n != 7 || m != 8 || p != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
