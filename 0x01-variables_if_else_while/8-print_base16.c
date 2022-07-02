#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;
	char dd;

	for (d = '0'; d <= '9'; d++)

	{
		putchar(d);
	}
	for (dd = 'a'; dd <= 'f'; dd++)
	{
		putchar(dd);
	}
	putchar('\n');
	return (0);
}
