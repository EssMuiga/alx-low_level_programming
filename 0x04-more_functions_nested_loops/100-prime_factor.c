#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints prime factors of 612852475143 followed by a new line
 * return: 0 if success
 */
int main(void)
{

	long prime = 612852475143;
	long prime = div;

	while (div < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (div = 3; div < (prime /2); div += 2)
		{
			if ((prime % div) == 0)
			{
				prime /= div;
			}
		}
		printf("%ld\n", prime);
		return (0);
	}
}
