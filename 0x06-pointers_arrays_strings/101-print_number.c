#include <stdio.h>
/**
 * print_number - Function that prints an integer
 * @n: integer input
 * Return: no return
 */
void print_number(int n)
{
	unsigned int a, b, count;

	if (n < 0)
	{
		putchar(45);
		a = n * -1;
	}
	else
	{
		a = n;
	}
	b = a;
	count = 1;
	while (b > 9)
	{
		b /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		putchar(((a / count) % 10) + 48);
	}
}
