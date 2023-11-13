#include "lists.h"
/**
 *add_dnodeint- add node in sequenc last = first
 *@head: head node
 *@n: data value to add
 *Return: current node on success
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current = malloc(sizeof(dlistint_t));

	if (current == NULL)
	{
		return (NULL);
	}

	current->n = n;
	current->next = *head;
	current->prev = NULL;

	if (*head != NULL)
	{
		(*head)->prev = current;
	}

	*head = current;

	return (current);
}
