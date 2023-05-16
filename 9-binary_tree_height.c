#include 'binary_tree.h'
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t altura_izquierda;
    size_t altura_derecha;

    if (tree == NULL) 
    {
        return 0;
    }

    altura_izquierda = binary_tree_height(tree->left);
    altura_derecha = binary_tree_height(tree->right);

    return (altura_izquierda > altura_derecha) ? altura_izquierda + 1 : altura_derecha + 1;
}