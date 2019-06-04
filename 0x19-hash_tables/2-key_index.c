#include "hash_tables.h"

/**
 * key_index - Gives you the index of the key
 * @key: key
 * @size: Size of the HashTable
 *
 * Return: Index where value is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0, index = 0;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}