#include "lists.h"
/**
  *add_node - Adds a new node at the beginning of a linked list.
  *@head: Pointer to a pointer to the head of the linked list.
  *@str: String to be duplicated and stored in the new node.
  *Return: Pointer to the new node, or NULL on failure.
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *address;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
		return (NULL);

	address = malloc(sizeof(list_t));
	if (address == NULL)
	{
		free(address);
		return (NULL);
	}

	address->str = duplicate;
	address->len = strlen(duplicate);
	address->next = *head;

	*head = address;

	return (address);
}
