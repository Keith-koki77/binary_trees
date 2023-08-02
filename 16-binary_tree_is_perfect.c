#include "binary_trees.h"

/**
 * binary_tree_size - function measures the size of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: tree is NULL, the function will return 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);

	left_count = binary_tree_size(tree->left);
	right_count = binary_tree_size(tree->right);

	if (left_count == right_count)
		return (left_count + right_count + 1);
	else
		return (0);

}

/**
 * binary_tree_is_perfect - function that checks if a tree is perfect
 * @tree: The tree in discussion
 * Return: 0 If tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_size(tree) > 0)
		return (1);

	else
		return (0);
}
