#include "main.h"

/**
 * print_alphabet  - Check description
 * Description: It prints loercase characters, fed by a new line.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
}
