#include "lists.h"
/**
 * insert_node - inserts a number into a sorted singly linked list.
 * @head: pointer to pointer of first node of listint_t list
 * @number: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	current = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	if (new->n < (*head)->n)
	{
		new->next = current;
		*head = new;
		return (new);
	}
	while (current)
	{
		if (current->next == NULL)
		{
			new->next = current->next;
			current->next = new;
			break;
		}
		if (new->n < current->next->n)
		{
			new->next = current->next;
			current->next = new;
			break;
		}
		current = current->next;
	}
	return (new);
}
