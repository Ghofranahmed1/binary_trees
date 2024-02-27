#include "binary_trees.h"
/**
 *binary_tree_postorder- fun goes through binary tree using post-order
 *@tree: the tree to be printed
 *@func: fuction that print the intger
 *Return: nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
