#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
    int ch;
	int n;
	int m;

	for (ch = 48; ch <= 57; ch++)
	{
	for (n = 49; n <= 57; n++)
	{
	for (m = 50; m <= 57; m++)
	{
	if (n > ch && m > n)
	{
	putchar(ch);
	putchar(n);
	putchar(m);
    }
	}
	}
    }

	putchar(10);
	return (0);
}