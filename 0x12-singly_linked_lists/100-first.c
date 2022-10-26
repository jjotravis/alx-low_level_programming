#include <stdio.h>

/**
 * main_constructor - A constructor function that prints before main
 *
 * Return: Nothing
 */
void main_constructor(void) __attribute__((constructor));

void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
