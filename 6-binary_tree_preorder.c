#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func:pointer to a function to call for each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	if (tree != NULL && func != NULL)
	{
		/* 1. visit the current node*/
		func(tree->n);

		/* 2. Recursively traverse the left subtree */
		binary_tree_preorder(tree->left, func);

		/* 3. Recursively traverse the right subtree */
		binary_tree_preorder(tree->right, func);
	}
}
