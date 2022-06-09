#include <stdio.h>
/**
 * more_numbers - function that prints numbers 0 to 14 ten times
 */
void more_numbers(void)
{

	int num;
	int count;

	for (count = 0; count <= 9; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				putchar((num / 10) + '0');
			}
			putchar((num % 10) + '0');
		}
		putchar('\n');
	}
}
