#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
 const listint_t *tmp, *temp;
 size_t num = 1;

 if (head == NULL || head->next == NULL)
 return (0);

 tmp = head->next;
 temp = (head->next)->next;

 while (temp)
 {
 if (tmp == hare)
 {
 tmp = head;
 while (tmp != temp)
 {
 num++;
 tmp = tmp->next;
 temp = temp->next;
 }

 tmp = tmp->next;
 while (tmp != temp)
 {
 num++;
 tmp = tmp->next;
 }

 return (num);
 }

 tmp = tmp->next;
 temp = (temp->next)->next;
 }

 return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
 size_t num, index = 0;

 num = looped_listint_len(head);

 if (num == 0)
 {
 for (; head != NULL; num++)
 {
 printf("[%p] %d\n", (void *)head, head->n);
 head = head->next;
 }
 }

 else
 {
 for (index = 0; index < num; index++)
 {
 printf("[%p] %d\n", (void *)head, head->n);
 head = head->next;
 }

 printf("-> [%p] %d\n", (void *)head, head->n);
 }

 return (num);
}


