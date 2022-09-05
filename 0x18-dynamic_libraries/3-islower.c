#include <stdio.h>
/**
 * _islower - checking the lowercase character
 * @c: the integer
 * Return: 1 if successful, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
