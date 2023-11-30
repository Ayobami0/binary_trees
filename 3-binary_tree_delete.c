#include "binary_trees.h"
#include <stdlib.h>

void _delete_node(binary_tree_t *tree);

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	_delete_node(tree);
}

/**
 * _delete_node - Deletes nodes in a binary tree
 * @tree: Pointer to the node to delete
 */
void _delete_node(binary_tree_t *tree)
{
	if (!tree)
		return;

	_delete_node(tree->left);
	_delete_node(tree->right);

	free(tree);
}
