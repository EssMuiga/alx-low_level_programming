#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - Function that concatenates two strings
 * @s1: the string to be appended to
 * @s2:the string that is being concatenated to
 * @n: the number of bytes from s2 to s1
 * Return: the pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int a, b, co, co_2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n < b)
	{
		b = n;
	}
	b += a;
	arr = malloc(sizeof(char *) * (b + 1));
	if (arr == NULL)
		return (NULL);
	for (co = 0; co < a; co++)
		arr[co] = s1[co];
	for (co_2 = 0; co < b; co_2++)
	{
		arr[co] = s2[co_2];
		co++;
	}
	co++;
	arr[co] = '\0';
	return (arr);
}
