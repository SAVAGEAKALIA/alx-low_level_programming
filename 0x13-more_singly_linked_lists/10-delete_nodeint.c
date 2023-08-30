#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node in an index
 * @head: pointer to node
 * @index:  node index to delete
 * Return: 1 (Success), or -1 (Fail)
 */


int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete = *head;
	listint_t *next_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}

	while (i < index - 1)
	{
		if (!delete || !(delet->next))
			return (-1);
		temp = temp->next;
		i++;
	}


	next_node = temp->next;
	delete->next = next_node->next;
	free(next_node);

	return (1);
}
