#include "binary_trees.h"
/**
 * binary_tree_insert_left- inserta un nodo.
 * @value: is the value
 * @parent: is the parent.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodo;

	nodo = binary_tree_node(parent, value);
	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left != NULL)
	{
		nodo->left = parent->left;
		parent->left = nodo->left;
	}
	else if (parent->left == NULL)
	{
		parent->left = nodo->parent;
	}
	return (nodo);
}