#include "lists.h"
/**
 * _strlen - gets the length of a string.
 * @s: string
 * Return: Always 0.
 */

int _strlen(const char *s)
{
        int l = 0;

        while (*(s + l))
        {
                l++;
        }
        return (l);
}
