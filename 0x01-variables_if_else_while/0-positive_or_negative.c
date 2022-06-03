#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (num < 0)
        printf("num is negative");
    else if (num > 0)
        printf("num is positive");
    else
        printf("num is zero");
	return (0);
}
