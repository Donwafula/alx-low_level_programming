#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase
 * @c: character to be checked
 * Return: 1 for lowercase or 0 for else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

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

/**
 * _abs - Computes absolute value of an interger
 * @c: number to be computed
 * Return: Absolute value of zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abso_val;

		abso_val = c * -1;
		return (abso_val);
	}
	return (c);
}

/**
 * _isupper - Checks for loercase and uppercase characters
 * @c: The character to be checked
 * Return: 1 for uppercase character, 0 for anything else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
