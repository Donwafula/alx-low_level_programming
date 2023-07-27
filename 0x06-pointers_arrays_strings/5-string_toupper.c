#include "main.h"
/**
 * string_toupper - change lowercase letters to uppercase.
 * @s: analized string.
 *
 * Return: String with all letters Uppercased.
 */
char *string_toupper(char *s)
{
	int b = 0;

	while (*(s + b) != '\0')
	{
		if (*(s + b) >= 'a' && *(s + b) <= 'z')
		{
			*(s + b) = *(s + b) - 32;
		}
		b++;
	}
	return (s);
}
