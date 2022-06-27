#include <stdio.h>
/**
 * _strstr - Function that locates a substring
 * @haystack: the input
 * @needle: the input
 * Return: 0 if successful
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
