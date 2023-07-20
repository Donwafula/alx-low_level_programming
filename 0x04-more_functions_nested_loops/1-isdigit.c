#include "main.h"

/**
 * _isdigit - Checks for digits
 * @c: character to be checked
 * Return: 1 if character is a digit, 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
