#include "lists.h"
/**
  *free_listint2 - free linked list
  *@head: pointer to list
  */

void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (temp != NULL)
	{
		listint_t *freenode = temp;

		temp = temp->next;
		free(freenode);
	}
	head = NULL;
}
