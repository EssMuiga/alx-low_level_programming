#include <stdio.h>
void jack_bauer(void)
{
	int hour, minute;
	for (minute = 0; minute <= 59; minute++)
	{
		putchar((hour / 10) + '0');
		putchar((hour % 10) + '0');
		putchar(':');
		putchar((minute / 10) + '0');
		putchar((minute % 10) + '0');
		putchar('\n');
	}
}
