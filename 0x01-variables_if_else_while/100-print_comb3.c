#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints double combination of digits
 * digits should not be same and only print smmallest of combo
 *
 * Return: 0 Success
 */

int main(void)
{
	int i, d;

	for (i = '0'; i <= '9'; i++)
	{
		for (d = i + 1; d <= '9'; d++)
		{
			if (d != i)
			{
				putchar(i);
				putchar(d);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
