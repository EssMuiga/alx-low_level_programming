#include <stdio.h>
/**
 * print_array - function that prints array elements
 * @a: the name of the array
 * @n: this is the number of elements of the array
 * return: a and n
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
	}
}
