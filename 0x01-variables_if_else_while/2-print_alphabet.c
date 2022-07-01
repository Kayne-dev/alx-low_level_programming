#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	for (int ch = 'a'; ch <= 'z'; ch++)
	{
		ch = tolower(ch);
		putchar(ch);
	}
	return (0);
}
