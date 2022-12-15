#include "main.h"

/**
 * print_line - A function that checks for uppercase character.
 * @n: int number
 * Return: Nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
