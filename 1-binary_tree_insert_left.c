#include "binary_trees.h"

/**
* binary_tree_insert_left - function that inserts a node as the left-chid.
* @parent: pointer to the node to insert on the left-child.
* @value: value of the created node.
* Return: Return 0 if failed.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->left = NULL;
	}
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	return (new_node);
}
