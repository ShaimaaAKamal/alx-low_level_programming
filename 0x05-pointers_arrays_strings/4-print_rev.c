#include "main.h"
#include <stdbool.h>
#include <stddef.h>
/**
 * print_rev - function used to print string
 * @s: is an char  pointer
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (true)
	{
		if (*s  != '\0')
			len++;
		else
			break;
		s++;
	}
	while (len > 0)
	{
		_putchar(s[--len]);
	}
	_putchar('\n');
}
