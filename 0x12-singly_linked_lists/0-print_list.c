#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: list to print
 * Return: Null or number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		a++;
	}
	return (a);
}
