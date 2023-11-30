#include "binary_trees.h"
#include <stddef.h>

size_t _depth(const binary_tree_t *tree);
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure
 *
 * Return: Depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_depth(tree));
}
/**
 * _depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure
 *
 * Return: Depth of the node's parent, -1 if tree is NULL
 */
size_t _depth(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (_depth(tree->parent) + 1);
}
