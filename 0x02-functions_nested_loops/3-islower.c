#include "main.h"

/**
 * _islower  - Check description
 * Description: It checks whether the character is lower case or not, fed by a new line.
 * @c:is a parameter char to check wheter it's lowercase or nit
 * Return: 1 if lowercase , 0 otherwise.
 */
void _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
