#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints prime factors of 612852475143 followed by a new line
 * return: 0 if success
 */
int main(void)
{
	long i, number = 612852475143;

	for (i  = 2; i <= number; i++)
	{
		if (number % i == 0)
		{
			number = number / i;
			i--;
		}
	}
	printf("%lu\n", i);
	return (0);
}
