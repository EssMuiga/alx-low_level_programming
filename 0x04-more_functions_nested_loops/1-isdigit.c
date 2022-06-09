#include <stdio.h>
/**
 * _isdigit - this function checks for digits 0 to 9
 * @c: this is the input
 * * return: 1 if c is a digit form _isdigit function and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
