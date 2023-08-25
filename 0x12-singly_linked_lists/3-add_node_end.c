#include "lists.h"
/**
  *
  *
  *
  *
  */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate;

	new_node = *head;

	if (str == NULL)
		return (NULL);

	duplicate = strdup(str);
	if(duplicate == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->str = duplicate;
	new_node->len = strlen(duplicate);
	new_node->next = *head;

	*head = new_node;

		return (new_node);
}
