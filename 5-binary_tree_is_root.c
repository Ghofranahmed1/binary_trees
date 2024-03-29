#include "binary_trees.h"
/**
 * binary_tree_is_root - function checks if  given node is a root
 * @node: the node to be ckecked
 * Return: 1 if it's a node, 0 otherwise
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
