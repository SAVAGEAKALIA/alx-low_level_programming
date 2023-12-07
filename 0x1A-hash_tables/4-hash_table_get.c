#include "hash_tables.h"
/**
 *hash_table_get - Function to get hash table
 *@ht: variable reprsenting hash table
 *@key: variable representing key
 *Return: NULL on failure or value on success
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	while (current != NULL)
	{
		if (current->key != NULL && strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;

	}

	return (NULL);
}
