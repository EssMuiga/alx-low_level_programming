#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int n;
	int last_digit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n%10;
	if (n > 5)
	{
		printf("Last digit of %d is n and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("Last digit of %d is n and is 0\n");
	}
	else
	{
		printf("Last digit of %d is n and is less than 6 and not 0\n");
	}
	return (0);
}
