#include "lists.h"

/**
  *free_listint2 - free linked list
  *@head: pointer to list
  *Return: no return value for void function
  */

void free_listint2(listint_t **head)
{
	listint_t *freenode;

	if (head == NULL)
		return;

	while ((*head) != NULL)
	{
		freenode = (*head)->next;
		free((*head));
		*head = freenode;
	}

	*head = NULL;
}
