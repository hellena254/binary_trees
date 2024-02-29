#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: number of leaves or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0, left_leaves = 0, right_leaves = 0;

	if (tree == NULL)
		return (0);

	/* Recursively count leaves in left and right subtrees*/
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	leaves = left_leaves + right_leaves;
	return ((!left_leaves && !right_leaves) ? leaves + 1 : leaves + 0);
}
