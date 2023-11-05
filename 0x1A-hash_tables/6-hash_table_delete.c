#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table
 **/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *aux;
	unsigned int idx;

	if (!ht || !ht->array)
		return;

	for (idx = 0; idx < ht->size; idx++)
	{
		tmp = ht->array[idx];
		while (tmp != NULL)
		{
			aux = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);

			tmp = aux;
		}
	}
	free(ht->array);
	free(ht);
}
