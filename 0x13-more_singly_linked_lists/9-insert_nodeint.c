#include "lists.h"
/**
  *insert_nodeint_at_index - add node at specific index
  *@head: first node
  *@idx: index where node should be added
  *@n: node data
  *Return: address of new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert = *head;
	listint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; insert != NULL; i++)
	{

		if (i == idx - 1)
		{
			new_node->next = insert->next;
			insert->next = new_node;
			return (new_node);
		}
		else
			insert = insert->next;
	}
	return (NULL);
}

