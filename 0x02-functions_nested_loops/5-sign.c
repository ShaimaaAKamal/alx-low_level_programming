#include "main.h"

/**
 * print_sign  - Check description
 * Description: It checks sign of a number.
 * @n: input number
 * Return: 1 if psoitive , 0 if zer0 and -1 if negative.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
