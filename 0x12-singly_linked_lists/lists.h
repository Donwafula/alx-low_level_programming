#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * struct node - singly linked list
 * str: string
 * len: len of str
 * next: points to next node
 */

typedef struct node
{
	unsigned int len;
	char *str;
	struct node *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
