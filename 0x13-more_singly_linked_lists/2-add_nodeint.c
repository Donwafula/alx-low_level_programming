#include "lists.h"
/**
 * add_nodeint - Creates a node and adds it to a linked list
 * @head: Pointer to head of the linked list
 * @n: Int to assigned to the node
 * Return: Pointer to the head of the linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node = (listint_t *) malloc(sizeof(listint_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->n = n;
	n_node->next = (*head);
	(*head) = n_node;
	return (*head);
}
