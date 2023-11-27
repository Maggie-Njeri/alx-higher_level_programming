#include "lists.h"
/**
 * check_cycle - to check if there is a cycle
 * @list: is the linked list to be checked
 * Return: success (1), failure (0)
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return(0);
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->fast->next;
		if (slow == fast)
			return(1);
	}
	return (0);
}
