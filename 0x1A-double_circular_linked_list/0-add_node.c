#include "list.h"
/**
 * create_node - create a node
 * @str: string node
 * Return: pointer or NULL
 */
List *create_node(char *str)
{
	List *node = NULL;

	node = malloc(sizeof(List));
	if (!node)
		return (NULL);

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->next = NULL;
	node->prev = NULL;

	return (node);
}
/**
 * add_node_end - add_node_end
 * @list: pointer list
 * @str: string node
 * Return: pointer or NULL
 */
List *add_node_end(List **list, char *str)
{
	List *node = NULL;

	node = create_node(str);
	if (!node)
		return (NULL);

	if (!(*list))
	{
		node->next = node;
		node->prev = node;
		*list = node;
	}
	else
	{
		node->next = (*list);
		node->prev = (*list)->prev;
		(*list)->prev->next = node;
		(*list)->prev = node;
	}
	return (node);
}
/**
 * add_node_begin - add_node_begin
 * @list: pointer list
 * @str: stirng node
 * Return: pointer or NULL
 */
List *add_node_begin(List **list, char *str)
{
	List *node = NULL;

	node = create_node(str);
	if (!node)
		return (NULL);

	if (!(*list))
	{
		node->next = node;
		node->prev = node;
		*list = node;
	}
	else
	{
		node->next = (*list);
		node->prev = (*list)->prev;
		(*list)->prev->next = node;
		(*list)->prev = node;
		*list = node;
	}

	return (node);
}
