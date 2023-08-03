#include "main.h"
/**
  * _lenght - checks the length of a string
  * @s: is the string
  * Return: return the leng of the string
**/
int _lenght(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _lenght(s + 1));
}

/**
 * checkp - checks if the string is palindrome
 * @a: is the index
 * @b: is the length of the string
 * @c: is the string
 * Return: 1 if is polindrome or 0 if not
**/
int checkp(int a, int b, char *c)
{
	if (b > 0)
	{
		if (c[a] == c[b])
		{
			return (checkp(a + 1, b - 1, c));
		}
		else if (c[a] != c[b])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: is the string
  * Return: return 1 if the string is a palindrome or 0 otherwise
**/
int is_palindrome(char *s)
{
	return (checkp(0, _lenght(s) - 1, s));
}
