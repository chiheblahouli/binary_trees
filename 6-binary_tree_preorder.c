#include "binary_trees.h"

/**
* binary_tree_preorder - Traverse binary tree.
* @tree: pointer of the root node.
* @func: pointer of the function to be called.
* Return: always 0.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (func == NULL)
	{
		return;
	}
	if (tree == NULL)
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->right, func);
        binary_tree_preorder(tree->left, func);

}
