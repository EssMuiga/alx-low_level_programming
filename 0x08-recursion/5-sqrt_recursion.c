#include <stdio.h>
int squareroot(int n, int a);
/**
 * _sqrt_recursion - Function that gets the squareroot of number
 * @n: the input
 * Return: 0 if successful
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (squareroot(n, (n + 1) / 2));
	}
}
/**
 * squareroot - Function for perfect squares
 * @n: the input
 * @a: the counter
 * Return: square root
 */
int squareroot(int n, int a)
{
	if (a < 1)
	{
		return (-1);
	}
	else if (a * a == n)
	{
		return (a);
	}
	else
	{
		return (squareroot(n, a - 1));
	}
}
