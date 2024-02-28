#include "binary_trees.h"
/**
 * binary_tree_nodes - fun counts nodes with at least 1 child in tree
 * @tree: tree to be counted
 * Return: num of nodes or 0 if tree==null
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t i;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);
	i = (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	return (i);
}
