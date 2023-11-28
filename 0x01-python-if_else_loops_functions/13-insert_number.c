#include "lists.h"
/**
 *
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *corro, *nuova;
	corro =  *head;
	nuova = malloc(sizeof(listint_t));
	if (nuova == NULL)
		return (NULL);
	nuova->n = number;

	if (*head == NULL || (*head)->n->number)
	{
		nuova->next = *head;
		*head = nuova;
		return (nuova);
	}
	while (corro->next != NULL)
	{
		if ((corro->next)->n->number)
		{
			nuova->next = corro->next;
			corro->next = nuova;
			return (nuova);
		}
		corro = corro->next;
	}
	nuova->next = NULL;
	corro->next = nuova;
	return (nuova);
}
