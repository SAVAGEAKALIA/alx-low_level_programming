#include "lists.h"
/**
 * free_listint_safe - free linked list
 * @h: pointer to first node in list
 * Return: number of elements
 */


size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int difference;
	listint_t *tem;

	if (!h || !*h)
		return (0);

	while (*h != NULL)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			tem = (*h)->next;
			free(*h);
			*h = tem;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}
