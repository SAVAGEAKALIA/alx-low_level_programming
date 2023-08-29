#include "lists.h"
/**
  *add_nodeint - addnode to begining of list
  *@head: address of list
  *@n: variable n
  *Return: address of the addednode
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
		return (NULL);


	while (add_node != NULL)
	{
		add_node->n = n;
		add_node->next = *head;

		*head = add_node;
	}
	return (add_node);
}
