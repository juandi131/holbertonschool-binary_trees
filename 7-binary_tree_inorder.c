#include "binary_trees.h"
c
Copy code
/**
 * binary_tree_inorder - Performs in-order traversal on a binary tree.
 * @tree: Pointer to the root node of the tree.
 * @func: Pointer to the function to be applied to each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return ;
	} 
	 binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
