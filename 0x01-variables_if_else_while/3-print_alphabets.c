#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char L;

	for (L = 'a'; L <= 'z'; L++)
	{
		putchar(L);
	}
	for (L = 'A'; L <= 'Z'; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
