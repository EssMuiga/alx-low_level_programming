#include <stdio.h>
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: the content
 * @n: the elements of an array
 * Return: 0 if successful
 */
void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n; i++)
	{
		n--;
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
