#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_postorder - goes through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func:pointer to a function to call for each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree != NULL && func != NULL)
	{
		/* 1. Recursively traverse the left subtree*/
		binary_tree_postorder(tree->left, func);

		/* 2. Recursively traverse the right subtree */
		binary_tree_postorder(tree->right, func);

		/* 3. Visit the root */
		func(tree->n);
	}
}
