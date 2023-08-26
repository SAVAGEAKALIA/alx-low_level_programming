#include "lists.h"
/**
  **add_node_end - Adds a new node at the beginning of a linked list.
  *@head: Pointer to a pointer
  *@str: String to be duplicated
  *Return: Pointer to the new node, or NULL on failure.
  */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp = *head;
	char *dup;

	new_node = *head;

	if (str == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = dup;
	new_node->len = strlen(dup);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
