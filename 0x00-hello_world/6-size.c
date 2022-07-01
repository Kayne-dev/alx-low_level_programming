#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

	printf("size of char is=%i byte(s)\n", sizeof(char));
	printf("size of int is=%i byte(s)\n", sizeof(int));
	printf("size of long int is=%i byte\n", sizeof(long int));
	printf("size of float is=%i byte\n", sizeof(float));
	printf("size of short int is=%i byte\n", sizeof(short int));
	printf("size of long long int is=%i byte\n", sizeof(long long int));

	return (0);
}
