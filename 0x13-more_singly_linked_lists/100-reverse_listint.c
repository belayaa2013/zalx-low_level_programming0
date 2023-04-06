#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *end = NULL;
	listint_t *beg = NULL;
	while (*head)
	{
		beg = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = beg;
	}
	*head = end;
	return (*head);
}
