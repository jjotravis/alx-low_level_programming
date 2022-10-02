#include "main.h"

/**
 * main - checks the number og arguements
 * @argc: Number of arguements
 * @argv: pointer to string containing arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (*argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
