#include "hash_tables.h"

/**
 *hash_table_set - Adds an element to the hash table.
 *@ht: The hash table to add or update the key/value.
 *@key: The key. It cannot be an empty string.
 *@value: The value associated with the key. It must be duplicated.
 *
 *Returns: 1 if it succeeds, 0 otherwise
 *In case of collision, adds the new node at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{	return (0;)  /* Invalid input */	}
	index = key_index((const unsigned char *)key, ht->size);

	current = ht->array[index];
	/* check  existing node with the same key/Handling collision of the key */
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{/* Update value if key already exists */
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->next;
	}

	/*If key does not exist, create a new node separate for the value to*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{	return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{	return (0);	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{	free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
