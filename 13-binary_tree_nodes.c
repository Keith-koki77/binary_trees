#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts non-empty nodes
 * @tree: a pointer to the root node of the tree to count the number of nodes
 * Return: The number of non empty nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count;

	if (tree == NULL)
		return (0);

	count = 0;

	if ((tree->left || tree->right) && tree)
		count++;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
