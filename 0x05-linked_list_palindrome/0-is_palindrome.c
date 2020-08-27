#include "lists.h"
/**
 * is_palindrome - check if is palindrome
 * @head: pointer to  the head
 * Return: 1: palindrome, 0: not palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *actualS = NULL;
	listint_t *actualF = NULL;

	if (head == NULL || *head == NULL)
		return (1);

	actualS = *head;
	actualF = *head;

	if (palindromeRec(actualS, actualF) == NULL)
		return (0);
	return (1);
}
/**
 * palindromeRec - check is a palindrome recursion
 * @actualS: pointer to refer the head, the start
 * @actualF: pointer to move from end to start
 * Return: pointer: palindrome, NULL: not palindrome
 */
listint_t *palindromeRec(listint_t *actualS, listint_t *actualF)
{
	listint_t *res = NULL;

	if (actualF != NULL)
	{
		res = palindromeRec(actualS, actualF->next);
		if (res == NULL)
			return (NULL);

		if (res->n != actualF->n)
			return (NULL);

		if (res->next == NULL)
			return (res);

		return (res->next);
	}

	return (actualS);
}
