#include "lists.h"
/**
  *get_nodeint_at_index - look and return value at nth node
  *@head: head node
  *@index: int value to manipulate node
  *Return: return nth.node on success
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth_node = head;
	unsigned int num = 0;

	if (index == 0)
		return (head);

	while (index != 0 || nth_node != NULL)
	{

		if (num == index)
			return (nth_node);

		nth_node = nth_node->next;
		num++;
	}

	return (NULL);
}
