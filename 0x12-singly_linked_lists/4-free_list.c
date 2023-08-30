#include "lists.h"

/**
 * free_list - frees mem of all list
 * @head: pointer to head in fucntion
 * Return: Always success.
 */
void free_list(list_t *head)
{

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		list_t *tmp;

		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
