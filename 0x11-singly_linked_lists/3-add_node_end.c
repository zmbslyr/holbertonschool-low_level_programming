#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds node to the end of a singly linked list
 * @head: Pointer to the start of the linked list
 * @str: String to copy into new node
 *
 * Return: Node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *endNode = *head;

	newNode = malloc(sizeof(list_t));
	if (!newNode)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (endNode->next != NULL)
		endNode = endNode->next;
	endNode->next = newNode;
	return (endNode);
}

/**
 * _strlen - Finds the length of a string
 * @str: String to find length of
 *
 * Return: Length of str
 */
int _strlen(const char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}
