#include <stdio.h>
/**
 * swap_int - function swaps values of two integers
 * @a: the value of the integer to be swapped
 * @b: the value to be swapped into
 * return: 0 if successful
 */
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
