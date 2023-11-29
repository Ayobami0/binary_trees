#include "binary_trees.h"
#include <stddef.h>

size_t _depth(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (_depth(tree));
}

size_t _depth(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (_depth(tree->parent) + 1);
}
