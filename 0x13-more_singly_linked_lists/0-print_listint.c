#include "lists.h"
/**
  *print_listint - print the current number of elements in node
  *@h: pointer to struct
  *Return: number of elements
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *elementnode = h;
	size_t i = 0;

	while (elementnode != NULL)
	{
		printf("%d", elementnode->n);

		elementnode = elementnode->next;
			i++;

			printf("\n");
	}
	return (i);
}
