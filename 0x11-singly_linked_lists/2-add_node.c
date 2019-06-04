#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a node to a linked list
 * @head: The head node of the list
 * @str: The string be stored in the node
 *
 * Return: Pointer to head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (head == NULL)
		return (NULL);
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}

/**
 * _strlen - Finds the length of a string
 * @str: String to be counted
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
