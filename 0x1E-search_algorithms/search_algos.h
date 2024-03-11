#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_arr(int *array, size_t low, size_t high);

#endif