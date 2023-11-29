#include "binary_trees.h"
#include <stdlib.h>

void _delete_node(binary_tree_t *tree);

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;

	_delete_node(tree);
}

void _delete_node(binary_tree_t *tree)
{
	if (!tree)
		return;

	_delete_node(tree->left);
	_delete_node(tree->right);

	free(tree);
}
