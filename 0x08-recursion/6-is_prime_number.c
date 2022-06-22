#include <stdio.h>
int prime_checker(int n, int i);
/**
 * is_prime_number - checks for a prime number
 * @n: the input
 * Return: 0 if successful
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (prime_checker(n, n / 2) < 0)
	{
		return (1);
	}
	return (0);
}
/**
 * prime_checker - checks for the prime number
 * @n: the input
 * @i: n / 2, then passes to i - 1
 * Return: prime
 */
int prime_checker(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % 1 == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, i - 1));
	}
}
