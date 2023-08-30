#include "lists.h"

/**
 * _strlen - gets the length of a string.
 * @s: string
 * Return: Always 0.
 */

int _strlen(const char *s)
{
	int l = 0;

	while (*(s + l))
	{
		l++;
	}
	return (l);
}
/**
 * add_node_end - adds a node at the end of a list.
 * @head: current head address
 * @str: ptr to string
 * Return: num of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nod;
	list_t *last = *head;

	if (head == NULL)
		return (NULL);

	nod = malloc(sizeof(list_t));
	if (nod == NULL)
		return (NULL);

	nod->str = strdup(str);
	if (str == NULL)
	{
		free(nod);
		return (NULL);
	}
	nod->len = _strlen(str);
	nod->next = NULL;

	if (*head == NULL)
	{
		*head = nod;
		return (nod);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = nod;
	return (nod);
}
