#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to calculate the depth of
 *
 * author-omidoyin
 * Return: depth of the node
 *         0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
