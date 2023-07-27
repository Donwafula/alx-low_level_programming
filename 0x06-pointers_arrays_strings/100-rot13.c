#include "main.h"
/**
 * rot13 - change letters to ROT13.
 * @s: analized string.
 *
 * Return: String with all letters in ROT13 base.
 */
char *rot13(char *s)
{
	char j[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int b = 0;
	int c;

	while (*(s + b) != '\0')
	{
		for (c = 0; c <= 51; c++)
		{
			if (*(s + b) == j[c])
			{
				*(s + b) = r[c];
				break;
			}
		}
		b++;
	}
	return (s);
}
