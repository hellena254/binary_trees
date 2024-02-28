#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node:  pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL);
}
