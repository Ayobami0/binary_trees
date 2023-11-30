#include "binary_trees.h"
#include <stddef.h>
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);


	return  (binary_tree_balance(tree->left) - binary_tree_balance(tree->right));
}
