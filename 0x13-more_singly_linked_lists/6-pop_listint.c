#include "lists.h"
/**
  *pop_listint - delete head node
  *@head: pointer of head node
  *Return: head node value n on success
  */

int pop_listint(listint_t **head)
{
	listint_t *temp, *node = *head;
	int n;

	if (node == NULL)
	{
		return (0);
	}

		n = node->n;
		temp = node;
		node = node->next;
		free(temp);

		*head = node;

	return (n);
}
