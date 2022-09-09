#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints combination of 3 numbers
 * Return: 0 always success
 */

int main(void)
{
	int i, d, p;

	for (i = '0'; i <= '9'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
			for (p = d + 1; p <= '9'; p++)
				if (p != d && d != i)
				{
					putchar(i);
					putchar(d);
					putchar(p);

					if (i == '7' && d == '8' && p == '9')
						continue;

					putchar(',');
					putchar(' ');
				}
		}
	}
	putchar('\n');

	return (0);
}
