#include "main.h"

/**
 * _isalpha  - Check description
 * Description: It checks whether the character is alphabetic or not.
 * @c:is a parameter char to check wheter it's alphabet or nit
 * Return: 1 if lowercase , 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
