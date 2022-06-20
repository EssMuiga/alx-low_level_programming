#include <stdio.h>
/**
 * print_chessboard - Function that prints the chessboard
 * @a: the array
 * Return: 0 if successful
 */
void print_chessboard(char (*a)[8])
{
	int c, b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			putchar(a[c][b]);
		}
		putchar('\n');
	}
}
