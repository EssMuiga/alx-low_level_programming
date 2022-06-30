#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memory
 * @b: the input amount
 * Return: the pointer to new memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
	{
		exit(98);
	}
	return (n);
}
