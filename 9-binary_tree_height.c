#include "binary_trees.h"
#include <stddef.h>

void _count_traverse(const binary_tree_t *tree,
	size_t *longest_path, size_t current_height);
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t longest_path = 0;
	size_t current_path = 0;


	if (!tree)
		return (0);

	_count_traverse(tree, &longest_path, current_path);
	return (longest_path);
}

void _count_traverse(const binary_tree_t *tree,
	size_t *longest_path, size_t current_height)
{
	if (!tree)
		return;

	if ((*longest_path) < current_height)
		*longest_path = current_height;

	_count_traverse(tree->left, longest_path, current_height + 1);
	_count_traverse(tree->right, longest_path, current_height + 1);
}
