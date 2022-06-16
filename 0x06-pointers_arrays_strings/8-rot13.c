#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * use one if and two loops only
 * @n: the input
 * Return: 0 if string is decrypted
 */
char *rot13(char *n)
{
	int a, rot_c = 13, i = 0;
	char toswap[] = {'A', 'N', 'a', 'n', 'B', 'O',
		'b', 'o', 'C', 'P', 'c', 'p', 'D', 'Q', 'd',
		'q', 'E', 'R', 'e', 'r', 'F', 'S', 'f', 's',
		'G', 'T', 'g', 't', 'H', 'U', 'h', 'u', 'I',
		'V', 'i', 'v', 'J', 'W', 'j', 'w', 'K', 'X',
		'k', 'x', 'L', 'Y', 'l', 'y', 'M', 'Z', 'm', 'z'};
	while (n[i] != '\0')
	{
		for (a = 0; a <= 51; a++)
		{
			if (n[i] == toswap[a])
			{
				n[i] = n[i] + rot_c;
				a = 51;
			}
			rot_c = rot_c * -1;
		}
		i++;
	}
	return (n);
}
