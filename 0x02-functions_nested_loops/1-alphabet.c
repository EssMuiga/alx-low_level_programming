#include <stdio.h>
void print_alphabet(void)
{
	char ch;
	ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
