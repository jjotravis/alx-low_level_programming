#include "main.h"
#include <unistd.h>

/**
 * main - Entry point
 * Description: prints _putchar followed by new line
 * Return: 0 on success
 */

int main(void)
{
	int n;
	char str[8] = "_putchar";

	for (n = 0; n < 9; n++)
		_putchar(str[n]);
	_putchar('\n');

	return (0);
}

