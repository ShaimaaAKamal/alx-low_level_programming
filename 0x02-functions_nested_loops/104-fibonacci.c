#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fibonacci[98];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	i = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	while (i <= 96)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 96)
			printf("%ld\n", fibonacci[i]);
		else
			printf("%ld, ", fibonacci[i]);
		i++;
	}

	return (0);
}
