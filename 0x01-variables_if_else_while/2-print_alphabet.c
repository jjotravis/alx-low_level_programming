#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet
 * Return: Always 0 success
 */

int main(void)
{
	char letters;
	
	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
		putchar('\n');

	return (0);
}
