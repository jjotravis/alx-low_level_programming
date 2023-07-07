#include "main.h"
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: counts number of arguements
 * @argv: pointer to string containing arguements
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num;
	int result = 0;
	int i;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argc[argv][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[argc]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
