#include "binary_trees.h"
/**
 * binary_tree_inorder - performs an in order traversal on a binary tree
 * @tree: pointer to the root node of the tree
 * @func: pointer to the function to be applied to each element of the tree
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return ;
	}
    
<<<<<<< HEAD
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
=======
    binary_tree_inorder(tree->left, func);
    func(tree->n);
    binary_tree_inorder(tree->right, func);
}
>>>>>>> e96cfbd6b1a275287de3cea8e1fd1d501d0ae4e3
