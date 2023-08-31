#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i, j;

	i = 0;
	j = i;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		i = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		j = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((i > j) ? i : j);
	}
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the balance factor.
 * Return: The balance factor of the tree, or 0 if tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int i, j, k;

	i = 0;
	j = i;
	k = j;

	if (tree)
	{
		j = ((int)binary_tree_height(tree->left));
		i = ((int)binary_tree_height(tree->right));
		k = j - i;
	}

	return (k);
}

