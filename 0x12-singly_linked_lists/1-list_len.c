#include "lists.h"
/**
  *list_len - Returns the number of elements in a linked list.
  *@h: Pointer to the head of the linked list.
  *Return: Number of elements.
  */

size_t list_len(const list_t *h)
{
		const list_t *string;
		size_t n = 0;

		string = h;

		while (string != NULL)
		{
			n++;
			string = string->next;
		}
	return (n);
}
