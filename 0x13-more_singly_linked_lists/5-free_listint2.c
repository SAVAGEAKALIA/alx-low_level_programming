#include "lists.h"

/**
  *free_listint2 - free linked list
  *@head: pointer to list
  *Return: no return value for void function
  */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;
	listint_t *freenode;

	if ((*head) == NULL)
	{
		return;
	}

	while (temp != NULL)
	{
		freenode = temp->next;
		free(temp);
		temp = freenode;
	}

	*head = NULL;
}
