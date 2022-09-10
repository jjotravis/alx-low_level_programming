#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints 2 digit numbers
 *
 * Return: 0 always success
 */

int main(void)
{
	int i, d;

	for (i = 0; i < 99; i++)
	{
		for (d = i + 1; d < 99; d++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');

			if (i == 98 && d == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
