#include "lists.h"
/**
  *listint_len - count number of element
  *@h: pointer to struct
  *Return: number of element only back to program
  */

size_t listint_len(const listint_t *h)
{
	const listint_t *num_element = h;
	size_t i = 0;

	while (num_element != NULL)
	{
		num_element = num_element->next;
		i++;
	}
	return (i);
}
