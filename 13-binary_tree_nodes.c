#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_nodes - Counts the nodes with at least one
 *			child in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
