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

	while (string != NULL)
	{
		if (string->str == NULL)
		printf("[0] (nil)");

		else
		{
			printf("[%u] %s", string->len, string->str);
		}
		string = string->next;
		n++;

		printf("\n");
	}
	return (n);
}
