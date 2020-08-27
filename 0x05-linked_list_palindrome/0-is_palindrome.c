#include "lists.h"
/**
 * is_palindrome - check if is palindrome
 * @head: pointer to head of list
 * Return: 1: palindrome, 0: not palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *currentS = NULL;
	listint_t *currentF = NULL;

	if (head == NULL || *head == NULL)
		return (1);

	currentS = *head;
	currentF = *head;

	if (is_palindrome_rec(currentS, currentF) == NULL)
		return (0);
	return (1);
}
/**
 * is_palindrome_rec - check is a palindrome recursion
 * @currentS: pointer to refer the head, the start
 * @currentF: pointer to move from end to start
 * Return: pointer: palindrome, NULL: not palindrome
 */
listint_t *is_palindrome_rec(listint_t *currentS, listint_t *currentF)
{
	listint_t *res = NULL;

	if (currentF != NULL)
	{
		res = is_palindrome_rec(currentS, currentF->next);
		if (res == NULL)
			return (NULL);

		if (res->n != currentF->n)
			return (NULL);

		if (res->next == NULL)
			return (res);

		return (res->next);
	}

	return (currentS);
}
