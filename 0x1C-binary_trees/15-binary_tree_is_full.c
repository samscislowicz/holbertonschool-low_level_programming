#include "binary_trees.h"

/**
 * binary_tree_is_full -that checks if a binary tree is full
 * @tree: a pointer to the root node of the tree
 * Return: 0 or 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && if (tree->left == NULL))
		return (1);
	if (tree->left == NULL && if (tree->right != NULL))
		return (0);
	if (tree->left != NULL && if (tree->right == NULL))
		return (0);
	if (tree->left && tree->right)
	{
	return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	}
	return (0);
}
