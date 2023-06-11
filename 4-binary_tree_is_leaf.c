#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - check if not is leaf
 * @node: pointer to node to check
 * Return: 1 if leaf & 0 otherwise
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left || node->right)
		return (0);
	return (1);
}
