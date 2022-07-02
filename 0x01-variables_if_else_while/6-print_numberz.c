#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints all digit numbers of base ten starting from zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
