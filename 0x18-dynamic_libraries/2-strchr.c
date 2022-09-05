#include <stdio.h>
/**
 * _strchr - function that locates a character in a string
 * @c: the character being located
 * @s: the string in question
 * Return: 0 if success and NULL if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
