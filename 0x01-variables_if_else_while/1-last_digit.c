#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - fot last digit
 * Return: 0 if successful
 */
int main(void)
{
	char i;
	int n = i % 10;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of i is n and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("Last digit of i is n and is 0\n");
	}
	else
	{
		printf("Last digit of i is n and is less than 6 and not 0\n");
	}
	return (0);
}
