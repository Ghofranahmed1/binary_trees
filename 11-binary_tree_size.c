#include "binary_trees.h"
/**
 * binary_tree_size -  function that measures the size of a binary tree
 * @tree: the tree to be measured
 * Return: size of tree or 0 if tree=null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	else
	{
		size = (binary_tree_size(tree->left)
			+ 1 + binary_tree_size(tree->right));
		return (size);
}
}
