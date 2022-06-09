#include <stdio.h>
/**
 * print_line - function that prints a straight line in the terminal
 * @n: number of yimes the character _ is printed
 */
void print_line(int n)
{

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;
		for (i = 1; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
