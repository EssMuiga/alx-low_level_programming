#include <stdio.h>
/**
 * main - check code
 *
 * Return: 0
 */
int isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}