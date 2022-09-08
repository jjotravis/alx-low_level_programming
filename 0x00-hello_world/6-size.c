#include <stdio.h>

/**
 * main - entry point
 * introduces and sets the value of variables
 * prints the var size
 * Return : always 0 success
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("The size of char is: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of int is: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of long int is: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of long long int is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of float is: %lu byte(s)\n", (unsigned long)sizeof(e));

	return(0);
}
