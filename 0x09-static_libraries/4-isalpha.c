#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: charater to be checked
 * Return: 1 for alphabets, 0 else
 */

int _isalpha(int c)
{
	if (c > 64 && c <= 122)
	{
		return (1);
	}
	return (0);
}
