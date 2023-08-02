#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as a left child
 * of another node.
 * @parent: a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->left = parent->left;
	}
	else
	{
		new_node->left = NULL;
	}

	parent->left = new_node;
	new_node->parent = parent;
	new_node->n = value;

	return (new_node);
}

