#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @n: bytes
 * @src: memory area being copied from
 * @dest: memory area being copied to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

