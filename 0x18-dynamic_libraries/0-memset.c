#include <stdio.h>
/**
 * _memset - function that fills memory with a constant byte
 * @s: where the pointer points to
 * @b: constant byte
 * @n: the bytes
 * Return: 0 if successful
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
