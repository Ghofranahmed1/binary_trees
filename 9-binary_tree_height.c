#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: the tree the be measured
 * Return: the height, 0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_h = 0, left_h = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);
	while (tree->left != NULL)
	{
		tree = tree->left;
		left_h++;
	}
	tree = temp;
	while (tree->right != NULL)
	{
		tree = tree->right;
		right_h++;
	}
	tree = temp;
	if (right_h > left_h)
		return (right_h);
	else
		return (left_h);
}
