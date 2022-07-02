#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Prints alphabets in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char L, q, e;

	q = 'q';
	e = 'e';

	for (L = 'a'; L <= 'z'; L++)
	{
		if (L != q && L != e)
		{
			putchar(L);
		}
	}
	putchar('\n');
	return (0);
}

