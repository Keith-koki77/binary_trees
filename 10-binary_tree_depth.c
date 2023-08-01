#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth
 * of a node in a binary tree
 * @tree: pointer to node to measure
 * Return: 0 if tree is NULL
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth_l = 0, depth_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent)
	{
		depth_l = binary_tree_depth(tree->parent) + 1;
		depth_r = binary_tree_depth(tree->parent) + 1;
	}

	if (depth_l > depth_r)
		return (depth_l);

	else
		return (depth_r);
}
