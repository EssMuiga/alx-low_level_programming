#include <stdio.h>
/**
 * _strlen - function that returns the length of a string
 * @s: value of the integer being considered
 * return: not
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
