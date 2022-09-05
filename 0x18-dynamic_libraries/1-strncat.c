#include <stdio.h>
/**
 * _strncat - function that concatenates two strings
 * @dest: the one to be copied to
 * @src: the string to be copied from
 * @n: input of the bytes to be used
 * Return: 0 if successful
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (c = 0; c < n; c++)
	{
		dest[i + c] = src[c];
		if (src[c] == '\0')
			c = n;
	}
	return (dest);
}
