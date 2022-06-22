#include <stdio.h>
/**
 * factorial - Function that gets a number's factorial
 * @n: the input integer
 * Return: 0 if successful
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
