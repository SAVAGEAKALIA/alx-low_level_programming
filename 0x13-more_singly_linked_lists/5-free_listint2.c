#include "lists.h"

/**
  *free_listint2 - free linked list
  *@head: pointer to list
  *Return: no return value for void function
  */

void free_listint2(listint_t **head)
{
	if (head == NULL)
	{
		return;
	}

	listint_t *temp = *head;
	listint_t *freenode;

	while (temp != NULL)
	{
		freenode = temp->next;
		free(temp);
		temp = freenode;
	}

	*head = NULL;
}
