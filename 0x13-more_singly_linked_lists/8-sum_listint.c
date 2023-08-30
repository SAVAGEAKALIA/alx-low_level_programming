#include "lists.h"
/**
  *sum_listint - add the sum of the n variable in node
  *@head: head of node
  *Return: sum total on success
  */

int sum_listint(listint_t *head)
{
	listint_t *sum_node = head;
	int n, sum = 0;

	if (sum_node == NULL)
		return (0);

	for (n = 0; sum_node != NULL; n++)
	{
		sum += sum_node->n;

		sum_node = sum_node->next;
	}
	return (sum);
}
