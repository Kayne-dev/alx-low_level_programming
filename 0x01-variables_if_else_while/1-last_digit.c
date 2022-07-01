#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*more headers go in there*/

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n, lastnum;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastnum = n % 10;
	if (lastnum > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastnum);
	}
	else if (lastnum == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastnum);
	}
	else if (lastnum < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnum);
	}
	return (0);
}
