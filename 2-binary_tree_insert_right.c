#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: puntero del nodo
 *@value: Valor del nuevo nodo
 *Return: node
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);


	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{

		node->right = parent->right;

		parent->right->parent = node;
	}

	parent->right = node;

	return (node);
}
