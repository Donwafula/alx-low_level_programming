#include "lists.h"

/**
 * get_nodeint_at_index - returns to nth of the node
 * @head: structure
 * @index: index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c = 0;

	while (head != NULL)
	{
		if (c == index)
		{
			return (head);
		}
		c++;
		head = head->next;
	}
	return (NULL);
}
