#include "binary_trees.h"

/**
 * binary_tree_insert_left - unction that inserts a node as the
 *  left-child of another node
 *  If parent already has a left-childIf
 *  he new node must take its place, the old left-child must be set
 *  @parent: the root node
 *  @value: the value inside the node
 *  Return: the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (parent->left == NULL)
	{
		parent->left = new;
		return (new);
	}
	else
	{
		new->left = parent->left;
		parent->left->parent = new;
		parent->left = new;
		return (new);
	}
}
