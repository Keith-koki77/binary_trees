#include "binary_trees.h"

/**
 * binary_tree_leaves - a function that counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is null or the count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (left_count + right_count);
}
