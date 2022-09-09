#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 * except letters q and e
 * Return: Always 0 success
 */

int main(void)
{
	char lttrs, e, q;

	e = 'e';
	q = 'q';

	for (lttrs = 'a'; lttrs <= 'z'; lttrs++)
	{
		if (lttrs != e && lttrs != q)
			putchar(lttrs);
	}
	putchar('\n');

	return (0);
}
