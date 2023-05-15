#include "binary_trees.h"
/**
 * binary_tree_insert_right- this function inserta a nodo at the right
 * @parent: This is the parent
 * @alue: This is the value
 * Return: New_nodo
 * 
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodo;

	if (parent == NULL)
		return (NULL);

	new_nodo = binary_tree_node(parent, value);
	if (new_nodo == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_nodo->right = parent->right;
		new_nodo->right->parent = new_nodo;
	}
	parent->right = new_nodo;
	return (new_nodo);
}