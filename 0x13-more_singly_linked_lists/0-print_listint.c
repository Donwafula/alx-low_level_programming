#include "lists.h"

/**
 * print_listint - prints int in every position
 * @h: structure entry
 * Return: number the nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int c = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		c += 1;
		h = h->next;
	}
	return (c);
}
