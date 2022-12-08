#include <stdio.h>

/**
 * main - function to print data size
 * Return: always 0
 */

int main(void)
{
	char i;
	int x;
	long int y;
	long long int z;
	float r;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(r));
	return (0);
}