#include <stdio.h>
/**
 * _strcmp - function that compares two strings
 * @s1: the first entry
 * @s2: the second entry
 * Return: 0 if successful
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
