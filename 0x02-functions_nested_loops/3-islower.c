#include <stdio.h>
/**
 * main - checking the lowercase character
 * Return: 1 if successful, 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
