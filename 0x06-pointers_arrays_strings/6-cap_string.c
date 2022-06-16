#include <stdio.h>
/**
 * cap_string - function that capitalizes all words of a string
 * @n: the input of the string
 * Return: capital on the first letter
 */
char *cap_string(char *n)
{
	int i, a;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		 '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - cap;
		}
		cap = 0;
		for (a = 0; a <= 12; a++)
		{
			if (n[i] == separators[a])
			{
				a = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
