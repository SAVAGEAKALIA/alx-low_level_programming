#include "hash_tables.h"

/**
 * hash_table_create -Function to create Harsh Table
 * @size: The size of the array
 *
 * Return: Returns a pointer to the newly created hash table
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_table;

	/* Allocate memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}
	/* Update Hash table size of array from  size given */
	new_table->size = size;

	/* Allocate memory for the array */
	new_table->array = malloc(sizeof(hash_node_t *) * new_table->size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	/* Loop through each element in the array and initialize to Null*/
	for(i = 0; i < new_table->size; i++)
	{
		new_table->array[i] = NULL;
	}

	/* return pointer to created table */
	return (new_table);
}
