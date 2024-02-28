#include "binary_trees.h"
/**
 * binary_tree_depth -  func measures the depth of a node in a binary tree
 * @tree: the binary tree
 * Return: the deptht or 0 if the tree==null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
