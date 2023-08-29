#include "lists.h"
/**
 * list_len - returns num of elements in a linked list
 * @h: list
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	int c = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		c += 1;
		h = h->next;
	}
	return (c);
}
