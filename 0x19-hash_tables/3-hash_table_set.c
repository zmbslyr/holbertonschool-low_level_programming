#include "hash_tables.h"

/**
 * hash_table_set - Add or update a value in the HashTable
 * @ht: Table to update or add to
 * @key: Key to search for
 * @value: Value to set
 *
 * Return: 1 (Success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t **list;
	hash_node_t *prev, *nodePointer;

	prev = NULL;
	if (ht == NULL || ht->size < 1)
		return (0);
	if (value == NULL || key == NULL || key == '\0')
		return (0);
	list = &ht->array[key_index((unsigned char *)key, ht->size)];
	for (nodePointer = *list; nodePointer != NULL; nodePointer = nodePointer->next)
	{
		if (strcmp(nodePointer->key, key) == 0)
			break;
		prev = nodePointer;
	}
	if (nodePointer != NULL)
	{
		if (prev == NULL)
			return (updateNode(list, nodePointer, value));
		return (updateNode(&prev->next, nodePointer, value));
	}
	return (addNode(list, key, value));
}

/**
 * addNode - add a new node at the beginning of the list
 * @list: List to add node to
 * @key: Key
 * @val: Value
 *
 * Return: 1 (Success)
 */
int addNode(hash_node_t **list, char const *key, char const *val)
{
	hash_node_t *nodePointer;
	size_t kLen, vLen;

	kLen = strlen(key);
	vLen = strlen(val);
	nodePointer =  malloc(sizeof(hash_node_t) + kLen + vLen + 2);
	if (nodePointer == NULL)
		return (0);
	nodePointer->key = (char *)(nodePointer + 1);
	nodePointer->value = nodePointer->key + kLen + 1;
	strcpy(nodePointer->key, key);
	strcpy(nodePointer->value, val);
	nodePointer->next = *list;
	*list = nodePointer;
	return (1);
}

/**
 * updateNode - Update the value in an existing node
 * @prev: The previous nodes pointer to this node
 * @node: Node to update
 * @val: value to put in node
 *
 * Return: 1 (Success)
 */
int updateNode(hash_node_t **prev, hash_node_t *node, char const *val)
{
	size_t kLen, vLen;

	kLen = strlen(node->key);
	vLen = strlen(val);
	if (vLen > strlen(node->value))
	{
		node = realloc(
			node,
			sizeof(hash_node_t) + vLen + kLen + 2
		);
		if (node == NULL)
			return (0);
		node->key = (char *)(node + 1);
		node->value = node->key + kLen + 1;
		*prev = node;
	}
	strcpy(node->value, val);
	return (1);
}
