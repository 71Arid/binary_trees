#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates binaruy tree node
 * @parent: pointer to parent node of node to create
 * @value: value of the node to create
 * Return: the node created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;
	return (newNode);
}
