#include "binary_trees.h"

/**
 * binary_tree_sibling - a function that finds the sibling of a node
 * @node: a pointer to the node to find the sibling
 * Return: the node's sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling, *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	sibling = (parent->left == node) ? parent->right : parent->left;

	return (sibling);
}
