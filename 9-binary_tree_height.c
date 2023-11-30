#include "binary_trees.h"
#include <stddef.h>

void _count_traverse(const binary_tree_t *tree,
	size_t *longest_path, size_t current_height);
/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t longest_path = 0;
	size_t current_path = 0;


	if (!tree)
		return (0);

	_count_traverse(tree, &longest_path, current_path);
	return (longest_path);
}
/**
 * _count_traverse - Traverses a binary tree and counts the height
 * @tree: Pointer to the root node of the tree
 * @longest_path: Pointer to the longest path found
 * @current_height: Current height of the tree
 *
 * Description: Recursively traverses the tree and updates the longest path
 */
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
