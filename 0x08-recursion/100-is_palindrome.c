#include <stdio.h>
int lengthc(char *s);
int palindrome(char str[], int st, int end);
/**
 * is_palindrome - Function that checks for a palindrome
 * @s: the string
 * Return: 0 if successful
 */
int is_palindrome(char *s)
{
	int len;

	len = lengthc(s);

	if (len == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, len - 1));
}
/**
 * lengthc - Function that finds the length count
 * @s: the input
 * Return: length
 */
int lengthc(char *s)
{
	if (*s != '\0')
	{
		return (1 + lengthc(s + 1));
	}
	return (0);
}
/**
 * palindrome - checks for a palindrome
 * @str: the string
 * @st: the start of the string
 * @end: end of string
 * Return: str is palindrome
 */
int palindrome(char str[], int st, int end)
{
	if (st >= end)
	{
		return (1);
	}
	if (str[st] != str[end])
	{
		return (0);
	}
	if (st <= end || st < end + 1)
	{
		return (palindrome(str, st + 1, end - 1));
	}
	return (1);
}
