#include "lists.h"
/**
  *print_list - singly list array
  *@h: pointer to structure
  *Return: n on success
  */

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *string;

	 string = h;

		while (string != NULL) /*created a loop for each node*/
	{
			if (string->str == NULL)
			{
				printf("[0] (nil)\n");
			}
			else
			
			printf("[%u] %s\n", string->len, string->str);
			string = string->next;/*moves to the next node*/
			n++;
	}
	return (n);
}
