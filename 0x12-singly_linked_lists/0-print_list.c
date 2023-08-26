#include "lists.h"
/**
  *print_list - singly list array
  *@h: pointer to structure
  *Return: n on success
  */

size_t print_list(const list_t *h)
{
	size_t n = 0;

		while (h != NULL) /*created a loop for each node*/
	{
			if (h->str == NULL)
				printf("[0] (nil)");

			else
			{
			printf("[%u] %s", h->len, h->str);
			}
			h = h->next;/*moves to the next node*/
			n++;

			printf("\n");
	}

	return (n);
}
