#include <stdio.h>
/**
 * main - check code
 *
 * return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar(48);
		return(0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
}
