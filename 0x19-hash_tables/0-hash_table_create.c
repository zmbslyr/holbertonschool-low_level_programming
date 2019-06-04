#include "hash_tables.h"

/**
 * hash_table_create - Creates a HashTable
 * @size: Size of the HashTable
 *
 * Return: Pointer to new HashTable (Success)
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = calloc(1, sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
