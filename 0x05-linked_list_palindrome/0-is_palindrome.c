#include "lists.h"
/**
 * is_palindrome - check if is palindrome
 * @head: pointer to head of list
 * Return: 1: palindrome, 0: not palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *new = NULL;
	listint_t *current = NULL;

	if (head == NULL || *head == NULL)
		return (1);

	new = *head;
	current = *head;

	if (is_palindrome_rec(new, current) == NULL)
		return (0);
	return (1);
}
/**
 * is_palindrome_rec - check is a palindrome recursion
 * @new: pointer to refer the head, the start
 * @current: pointer to move from end to start
 * Return: pointer: palindrome, NULL: not palindrome
 */
listint_t *is_palindrome_rec(listint_t *new, listint_t *current)
{
	listint_t *res = NULL;

	if (current != NULL)
	{
		res = is_palindrome_rec(new, current->next);
		if (res == NULL)
			return (NULL);

		if (res->n != currentF->n)
			return (NULL);

		if (res->next == NULL)
			return (res);

		return (res->next);
	}

	return (new);
}
