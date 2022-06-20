#include <stdio.h>
/**
 * print_diagsums - Function prints sum of two diagnals of square matrix
 * @a: the input
 * @size: the input
 * Return: 0 if successful
 */
void print_diagsums(int *a, int size)
{
	int c, b, total1 = 0, total2 = 0;

	for (c = 0; c <= (size * size); c = c + size + 1)
	{
		total1 = total1 + a[c];
	}
	for (b = size - 1; b <= (size * size) - size; b = b + size - 1)
	{
		total2 = total2 + a[b];
	}
	printf("%d, %d\n", total1, total2);
}
