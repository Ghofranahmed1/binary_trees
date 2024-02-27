#include "binary_trees.h"

/**
 * binary_tree_insert_right - unction that inserts a node as the
 *  left-child of another node
 *  If parent already has a left-childIf
 *  he new node must take its place, the old left-child must be set
 *  @parent: the root node
 *  @value: the value inside the node
 *  Return: the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (parent->right == NULL)
	{
		parent->right = new;
		return (new);
	}
	else
	{
		new->right = parent->right;
		parent->right->parent = new;
		parent->right = new;
		return (new);
	}
}
