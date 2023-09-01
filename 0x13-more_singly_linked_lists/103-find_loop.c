#include "lists.h"
/**
 * find_listint_loop - finds loop in linked list
 * @head: linked list to search 
 * Return: address of the node or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *previous = head;
	listint_t *nextone = head;

	if (!head)
		return (NULL);

	while (previous && nextone && nextone->next)
	{
		nextone = nextone->next->next;
		previous = previous->next;
		if (nextone == previous)
		{
			nextone = head;
			while (previous != nextone)
			{
				previous = previous->next;
				nextone = nextone->next;
			}
			return (nextone);
		}
	}

	return (NULL);
}
