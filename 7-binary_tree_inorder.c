#include "binary_trees.h"

/**
* binary_tree_inorder - traverse binary tree.
* @tree: pointer of the tree.
* @func: pointer of the function.
* Return: Always 0.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{
	if (tree == NULL)
	{
		return;
	}

	if (func == NULL)
	{
		return;
	}

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
