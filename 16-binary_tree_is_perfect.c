#include "binary_trees.h"
#include <stdio.h>

/**
 * is_perfect_recursive - Helper function to check if a subtree is perfect
 * @tree: Pointer to the root node of the subtree
 * @height: Pointer to store the height of the subtree
 *
 * Return: 1 if subtree is perfect, 0 otherwise
 */

int is_perfect_recursive(const binary_tree_t *tree, int *height)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		*height = 0;
		return (1);
	}

	if (!tree->left && !tree->right)
	{
		*height = 1;
		return (1);
	}

	if (is_perfect_recursive(tree->left, &left_height) &&
		is_perfect_recursive(tree->right, &right_height) &&
		left_height == right_height)
	{
		*height = left_height + 1;
		return (1);
	}

	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;

	if (tree == NULL)
		return (0);

	return (is_perfect_recursive(tree, &height));
}
