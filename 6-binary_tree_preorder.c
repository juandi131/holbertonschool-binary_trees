#include "binary_trees.h"
/**
 * binary_tree_preorder-  -
 * @func: is a function pointer
 * @tree: is a pointer
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int n))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
