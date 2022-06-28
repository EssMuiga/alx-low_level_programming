#include <stdio.h>
/**
 * _isalpha - Function checking if integer is an alphabet
 * Return: 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
