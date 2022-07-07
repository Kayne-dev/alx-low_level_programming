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

	for (ch = 0; ch <= 99; ch++)
	{
    if (ch % 10)
    {
        putchar(ch + '0');
        
    
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
	if (ch != 55 || n != 56 || m != 57)
	{
	putchar(44);
	putchar(32);
	}
	}
    }
	}
	}
	}
    }
	putchar(10);
	return (0);
}
