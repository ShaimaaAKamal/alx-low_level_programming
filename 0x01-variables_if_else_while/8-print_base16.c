#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low;

	for (low = 48; low <= 57; low++)
		putchar(low);
	for (low = 65; low <= 70; low++)
		putchar(low);
	putchar('\n');

	return (0);
}
