#include "binary_trees.h"

/**
 * heap_insert - inserts a value into a Max Binary Heap
 * @root: double pointer to the root node of the Heap
 * @value: store in the node to be inserted
 * Return: pointer to the inserted node or NULL if failure
 */

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new, *tmp = *root;

	new = malloc(sizeof(heap_t));

	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (*root == NULL)
	{
		*root = new;
		new->parent = NULL;
		return (new);
	}
	if (tmp->left == NULL)
	{
		new->parent = tmp;
		tmp->left = new;
		return (new);
	}
	new->parent = *root;
	tmp->right = new;
	return (new);
}
