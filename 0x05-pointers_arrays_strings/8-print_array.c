#include <stdio.h>
/**
 * print_array - function that prints array elements
 * @a: the name of the array
 * @n: this is the number of elements of the array
 * return: a and n
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;
		{
			printf(", ");
		}
		printf("\n");
	}
}
