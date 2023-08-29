#include "lists.h"
/**
  *add_nodeint_end - add node to the end of the lis
  *@head: head pointer to node
  *@n: variable in node
  *Return: address of last node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;

	listint_t *last = *head;

		end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
	{
		return (NULL);
	}

	end_node->n = n;
	end_node->next = NULL;

	if (*head == NULL)
	{
		*head = end_node;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;

		}
		last->next = end_node;
	}

		return (end_node);
}
