#include "lists.h"

/**
 * free_listint - frees nodes and list
 * @head: struct
 */
void free_listint(listint_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		listint_t *tmp;

		tmp = head;
		free(tmp);
		head = head->next;
	}
}
