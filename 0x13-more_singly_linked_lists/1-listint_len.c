#include "lists.h"
/**
 * listint_len - return sto the number of nuodes
 * @h: structure entry
 * Return: number the nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int c = 0;

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
