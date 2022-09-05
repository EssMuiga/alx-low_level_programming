#include <stdio.h>
/**
 * _strpbrk - Fuction that searches a string for any of a set of bytes
 * @s: the string
 * @accept: the string
 * Return: 0 if successful and NULL if not foung
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (NULL);
}
