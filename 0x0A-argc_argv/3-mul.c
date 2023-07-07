#include "main.h"
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: counts number of arguements
 * @argv: pointer to string containing arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	return (0);
}
