#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the num unique nodes in a looped listint_t list
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *snail, *rabbit;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	snail = head->next;
	rabbit = (head->next)->next;

	while (rabbit)
	{
		if (snail == rabbit)
		{
			snail = head;
			while (snail != rabbit)
			{
				node++;
				snail = snail->next;
				rabbit= rabbit->next;
			}

			snail = snail->next;
			while (snail != rabbit)
			{
				node++;
				snail = snail->next;
			}

			return (node);
		}

		snail = snail->next;
		rabbit = (rabbit->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a list safely.
 * @head: A pointer to the head of  list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
