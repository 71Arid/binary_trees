#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - insert node to the left
 * @parent: node to be inserted into
 * @value: value of newNode
 * Return: pointer to newnode
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->right == NULL)
		parent->right = newNode;
	else
	{
		newNode->right = parent->right;
		parent->right = newNode;
		newNode->right->parent = newNode;
	}
	return (newNode);
}
