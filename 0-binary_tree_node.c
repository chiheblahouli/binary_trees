#include "binary_trees.h"

/**
* binary_tree_node - a function that creates a binary tree node.
* @parent: pointer of the node to create.
* @value: Value of the new node.
* Return: Always 0 if failure.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = new_node->left = NULL;
	return (new_node);
}
