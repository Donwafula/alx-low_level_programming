#include "lists.h"

/**
 * free_listint2 - frees nodes and list and sets head to null
 * @head: struct
 */

void free_listint2(listint_t **head)
{

	if (head == NULL)
	{
		return;
	}
	while ((*head) != NULL)
	{
		listint_t *tmp;

		tmp = (*head);
		free(tmp);
		(*head) = (*head)->next;
	}
	(*head) = NULL;
}
