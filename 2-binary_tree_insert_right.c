#include "binary_trees.h"
/**
 * binary_tree_insert_right- this function inserta a nodo at the right
 * @parent: This is the parent
 * @alue: This is the value
 * 
 * 
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodo;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->left = parent->right;
		new_node->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}