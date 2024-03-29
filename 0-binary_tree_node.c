#include "binary_trees.h"
/**
 * binary_tree_node - create a nodo
 * @parent: is a pointer to parent
 * @value: is the value.
 * Return: the nodo.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = malloc(sizeof(binary_tree_t));
	if (nodo == NULL)
	{
		return (NULL);
	}
	nodo->parent = parent;
	nodo->left = NULL;
	nodo->right = NULL;
	nodo->n = value;
	return (nodo);
}
