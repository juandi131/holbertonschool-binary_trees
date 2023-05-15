#include "binary_trees.h"
/**
 * 
 * 
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *nodo;

    nodo = binary_tree_node(parent, value);

    if (parent != NULL)
    {
        while (parent->left != NULL)
        {
            parent->left = nodo->parent;
        }
        
    }




}