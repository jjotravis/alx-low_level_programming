#include "main.h"

/**
 * main - prints arguements received
 * @argc: counts number of arguements
 * @argv: pointer to string containing arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
