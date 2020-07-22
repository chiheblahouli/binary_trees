#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes the whole binary tree.
* @tree: tree that will be deleted.
*/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
	}
}
