#include "lists.h"

/**
 * pop_listint - deletes and returns the head node's data
 * @head: structs
 * Return: head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *ph;
	int res;

	if (*head == NULL)
	{
		return (0);
	}
	res = (*head)->n;
	ph = *head;
	*head = (*head)->next;
	free(ph);
	return (res);
}
