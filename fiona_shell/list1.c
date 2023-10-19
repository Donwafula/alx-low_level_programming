#include "shell.h"

/**
 * list_len -Determines the length of a linked list.
 * @h: Pointer to the first node of the list.
 *
 * This function counts the number of nodes in a linked list starting from
 * the provided node pointer.
 *
 * Return: The size of the list.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * list_to_strings -Converts a linked list into an array of strings.
 * @head: Pointer to the first node of the list.
 *
 * This function takes a linked list of strings and converts it into an
 * array of strings. Each node in the list is treated as a separate string.
 *
 * Return: An array of strings representing the linked list.
 */
char **list_to_strings(list_t *head)
{
	list_t *node = head;
	size_t i = list_len(head), j;
	char **strs;
	char *str;

	if (!head || !i)
		return (NULL);
	strs = malloc(sizeof(char *) * (i + 1));
	if (!strs)
		return (NULL);
	for (i = 0; node; node = node->next, i++)
	{
		str = malloc(_strlen(node->str) + 1);
		if (!str)
		{
			for (j = 0; j < i; j++)
				free(strs[j]);
			free(strs);
			return (NULL);
		}

		str = _strcpy(str, node->str);
		strs[i] = str;
	}
	strs[i] = NULL;
	return (strs);
}


/**
 * print_list -  Displays all elements of a list_t linked list.
 * @h: Pointer to the first node of the list.
 *
 * This function prints each element of a linked list, including its position
 * in the list (index) and the content of the string in the node.
 *
 * Return: The size of the list (number of nodes).
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		_puts(convert_number(h->num, 10, 0));
		_putchar(':');
		_putchar(' ');
		_puts(h->str ? h->str : "(nil)");
		_puts("\n");
		h = h->next;
		i++;
	}
	return (i);
}

/**
 * node_starts_with - Finds a node in the list with a string.
 * @node: Pointer to the head of the list.
 * @prefix: The prefix string to match.
 * @c: The character after the prefix to match.
 *
 * This function searches the linked list for a node whose string starts with
 * the specified prefix (or optionally followed by a specific character).
 *
 * Return: The matching node or NULL if no match is found.
 */
list_t *node_starts_with(list_t *node, char *prefix, char c)
{
	char *p = NULL;

	while (node)
	{
		p = starts_with(node->str, prefix);
		if (p && ((c == -1) || (*p == c)))
			return (node);
		node = node->next;
	}
	return (NULL);
}

/**
 * get_node_index - Gets the index of a node in the list.
 * @head: Pointer to the head of the list.
 * @node: Pointer to the node to find the index of.
 *
 * Return: The index of the node or -1 if the node is not found.
 */
ssize_t get_node_index(list_t *head, list_t *node)
{
	size_t i = 0;

	while (head)
	{
		if (head == node)
			return (i);
		head = head->next;
		i++;
	}
	return (-1);
}
