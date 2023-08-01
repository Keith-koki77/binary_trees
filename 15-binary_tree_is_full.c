#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a tree is full
 * @tree: The tree in discussion
 * Return: 0 If tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);

	return (left * right);
}
