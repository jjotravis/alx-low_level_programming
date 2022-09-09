#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabet in uppercase
 * then in lowercase
 * Return: Always 0 success
 */

int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');

	return (0);
}
