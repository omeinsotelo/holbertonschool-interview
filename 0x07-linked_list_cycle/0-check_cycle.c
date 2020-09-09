#include "lists.h"
/**
 * check_cycle - check if a list is cycle
 * @list: pointer to head linked list
 *
 * Return: 1 if is it and 0 is not
 */
int check_cycle(listint_t *list)
{
	listint_t *tortoise = list;
	listint_t *rabbit = list;

	if (list == NULL)
		return (0);

	if (rabbit->next == NULL)
		return (0);
	rabbit = rabbit->next->next;

	while (tortoise != NULL && rabbit != NULL)
	{
		tortoise = tortoise->next;

		if (rabbit->next == NULL)
			return (0);
		rabbit = rabbit->next->next;

		if (tortoise == rabbit)
			return (1);
	}

	return (0);
}
