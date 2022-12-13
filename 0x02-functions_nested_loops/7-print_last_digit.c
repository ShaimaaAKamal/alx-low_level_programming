#include "main.h"

/**
 * print_last_digit  - Check description
 * Description: It prints the last number of a digit.
 * @n: input number
 * Return: last digit of a number.
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n = n * (-1);
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
