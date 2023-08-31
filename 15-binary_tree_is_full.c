#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: Pointer to the root node of the tree to check.
 * Return: 1 if the tree is full, 0 otherwise or if tree is NULL.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int i = 0, j = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->i && tree->j)
		{
			i = binary_tree_is_full(tree->i);
			j = binary_tree_is_full(tree->j);
			if (i == 0 || j == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->i && !tree->j)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
