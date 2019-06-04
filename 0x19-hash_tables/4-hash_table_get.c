#include "hash_tables.h"

/**
 * hash_table_get - Get a value from the HashTable
 * @ht: Hash table to search
 * @key: Key of the value to get
 *
 * Return: Value string (Success)
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nodePointer;

	if (ht == NULL || key == NULL || ht->size < 1 || *key == '\0')
		return (NULL);
	while (nodePointer != NULL)
	{
		if (strcmp(key, nodePointer->key) == 0)
			break;
		nodePointer = nodePointer->next;
	}
	if (nodePointer == NULL)
		return (NULL);
	return (nodePointer->value);
}
