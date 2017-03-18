#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: given node
 * Return: return 1 if node is a root, and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node || node->parent)
		return (0);
	return (1);
}
