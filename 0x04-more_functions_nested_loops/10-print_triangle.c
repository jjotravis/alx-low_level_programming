#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: parameter
 * Return: nothimg
 */
void print_triangle(int size)
{
	int row, col, x;

	if (size <= 0)
		_putchar('\n');

	for (row = 0; row < size; row++)
	{
		for (col = size - row; col > 1; col--)
		{
			_putchar(' ');
		}
		for (x = row + col; x >= 1; x--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
