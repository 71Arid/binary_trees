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
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
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
