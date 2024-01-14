#include "lists.h"
/**
 * check_cycle - Checks for a cycle in a linked list
 * @list: Pointer to the head of the linked list.
 *
 * Return: 0 if there is no cyle, 1 if there is
 */
int check_cycle(listint_t *list)
{
	listint_t *slow_ptr = list;
	listint_t *fast_ptr = list;

	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			return (1);
		}
	}
	return (0);
}
