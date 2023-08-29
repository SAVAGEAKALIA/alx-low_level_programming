#include "lists.h"
/**
  *free_listint - free memory taken by node
  *@head: points to node list
  *Return: no return void function
  */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		listint_t *freenode = temp;

		temp = temp->next;
		free(freenode);
	}

	head = NULL;
}
