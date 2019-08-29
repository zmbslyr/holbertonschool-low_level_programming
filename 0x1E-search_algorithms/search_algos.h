#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Includes */
#include <stdio.h>
#include <stdlib.h>

/* Functions */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_part(int const *first, int const *last);

#endif /* SEARCH_ALGOS_H */
