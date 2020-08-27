#include "lists.h"
/**
 * is_palindrome - check if is palindrome
 * @head: pointer to head of list
 * Return: 1: palindrome, 0: not palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *currentI = NULL;
	listint_t *currentJ = NULL;

	if (head == NULL || *head == NULL)
		return (1);

	currentI = *head;
	currentJ = *head;

	if (is_palindrome_rec(currentI, currentJ) == NULL)
		return (0);
	return (1);
}
/**
 * is_palindrome_rec - check is a palindrome recursion
 * @currentI: pointer to refer the head, the start
 * @currentJ: pointer to move from end to start
 * Return: pointer: palindrome, NULL: not palindrome
 */
listint_t *is_palindrome_rec(listint_t *currentI, listint_t *currentJ)
{
	listint_t *res = NULL;

	if (currentJ != NULL)
	{
		res = is_palindrome_rec(currentI, currentJ->next);
		if (res == NULL)
			return (NULL);

		if (res->n != currentJ->n)
			return (NULL);

		if (res->next == NULL)
			return (res);

		return (res->next);
	}

	return (currentI);
}
