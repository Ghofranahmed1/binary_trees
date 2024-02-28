#include "binary_trees.h"
/**
 * binary_tree_leaves - fun counts the leaves in a binary tree
 * @tree: tree to be counted
 * Return: num of leafs or 0 if tree==null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	i = binary_tree_leaves(tree->left) +
	binary_tree_leaves(tree->right);
	return (i);
}
