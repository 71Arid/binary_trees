#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - insert node to the left
 * @parent: node to be inserted into
 * @value: value of newNode
 * Return: pointer to newnode
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *newNode = binary_tree_node(parent, value);

	if (parent->left)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	else
	{
		parent->left = newNode;
		newNode->parent = parent;
	}
	return (newNode);
}
