#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints _putchar followed by new line
 * Return:
 */

int main(void)
{
	int n = 0;
	char str[9] = "_putchar";

	while (n < 9)
	{
		_putchar(str[n]);
		n += 1;
	}
	_putchar('\n');

	return (0);
}

