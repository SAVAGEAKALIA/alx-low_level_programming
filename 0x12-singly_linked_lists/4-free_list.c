#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t head to be free
 */
void free_list(list_t *head)
{
	list_t *string;

	while (head != NULL)
	{
		string = head->next;
		free(head->str);
		free(head);
		head = string;
	}
}

