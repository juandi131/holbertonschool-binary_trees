#include "binary_trees.h"
/**
 * binary_tree_delete- this function deletes a binary tree
 * @tree: this is a note to parent
*/
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    binary_tree_delete(tree->left);

    binary_tree_delete(tree->right);


    free(tree);
}