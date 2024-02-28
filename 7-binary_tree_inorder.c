#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func:pointer to a function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree != NULL && func != NULL)
	{
		/* 1. Recursively traverse the left subtree*/
		binary_tree_inorder(tree->left, func);

		/* 2. Visit the root */
		func(tree->n);

		/* 3. Recursively traverse the right subtree */
		binary_tree_inorder(tree->right, func);
	}
}
