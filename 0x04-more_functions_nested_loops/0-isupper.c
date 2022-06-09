#include <stdio.h>
/**
 * _isupper function checks for uppercase letters
 * @c: is the input being checked for upper or lowercase
 * return: 1 if the input c is uppercase and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
