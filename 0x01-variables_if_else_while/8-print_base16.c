#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 16
 * Return: 0
 */

int main(void)
{
	int b;
	char low;

	for (b = '0'; b <= '9'; b++)
		putchar(b);
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
