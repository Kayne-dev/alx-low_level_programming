#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (int ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
