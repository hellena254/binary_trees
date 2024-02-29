#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full, otherwise 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_subtrees = 0, right_subtrees = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		left_subtrees = binary_tree_is_full(tree->left);
		right_subtrees = binary_tree_is_full(tree->right);
		if (left_subtrees == 0 || right_subtrees == 0)
		{
			return (0);
		}
		return (1);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
