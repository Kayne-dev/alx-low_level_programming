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
	for (int L = 'a'; L <= 'z'; L++)
	{
		L = tolower(L);
		putchar(L);
	}
	for (int U = 'A'; U <= 'Z'; U++)
	{
		U = toupper(U);
		putchar(U);
	}
	putchar('\n');
	return (0);
}
