#include "main.h"

/**
 * main - prints name of program
 * @argc: counts number of commands as elements in argv[]
 * @argv: pointer to string that contains arguement input
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc >= 0)
		printf("%s\n", argv[0]);
	return (0);
}
