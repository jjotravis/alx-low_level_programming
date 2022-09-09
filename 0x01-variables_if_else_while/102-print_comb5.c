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
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');

		if (i != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
