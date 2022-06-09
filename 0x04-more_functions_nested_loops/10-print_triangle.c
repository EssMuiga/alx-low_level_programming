#include <stdio.h>
/**
 * print_triangle - function that prints triangle followed by a new line
 * @size: this is the size of the triangle
 */
void print_triangle(int size)
{

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
