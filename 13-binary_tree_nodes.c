#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of nodes with at least 1 child
 *
 * @tree: Pointer to the root node of the tree to count nodes
 *
 * Return: Number of nodes with at least 1 child in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}
