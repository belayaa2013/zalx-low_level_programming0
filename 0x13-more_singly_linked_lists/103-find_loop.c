#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pom = head;
	listint_t *mop = head;
	if (!head)
		return (NULL);
	while (pom && mop && mop->next)
	{
		mop = mop->next->next;
		pom = pom->next;
		if (mop == pom)
		{
			pom = head;
			while (pom != fast)
			{
				pom = pom->next;
				mop = mop->next;
			}
			return (mop);
		}
	}
	return (NULL);
}
