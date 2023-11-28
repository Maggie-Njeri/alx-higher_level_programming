#include "lists.h"
/**
 * insert_node - Inserts a number into a sorted singly-linked lis
 * @head: A pointer the head of the linked list.
 * @number: The number to insert
 * Return: NULL on failure
 * otherwise a pointer to a new node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *corro, *nuova;
	corro =  *head;
	nuova = malloc(sizeof(listint_t));
	if (nuova == NULL)
		return (NULL);
	nuova->n = number;

	if (*head == NULL || (*head)->n >= number)
	{
		nuova->next = *head;
		*head = nuova;
		return (nuova);
	}
	while (corro->next != NULL)
	{
		if ((corro->next)->n < number)
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
