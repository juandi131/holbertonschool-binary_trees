#include "binary_trees.h"
/**
 * binary_tree_is_leaf- check if the node is a leaf.
 * @node: is a node
 * Return: Returns a one if is a NULL otherwise return 0.
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node || node->right || node->left)
		return (0);
	return (1);
}
