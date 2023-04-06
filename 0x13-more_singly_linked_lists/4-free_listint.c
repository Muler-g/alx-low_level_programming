#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: head pointer
 *
 * Return: 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
