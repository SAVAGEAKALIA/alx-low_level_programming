#include "hash_tables.h"

/**
 * key_index - Returns the Index of the hash function
 * @key: key variable or string to be hashed
 * @size: size of the hash table array
 * Return: Index on successs
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		unsigned long int table_size = size;
		unsigned long int hash = hash_djb2(key);
		unsigned long int index = 0;

		index = hash % table_size;

		return (index);
}
