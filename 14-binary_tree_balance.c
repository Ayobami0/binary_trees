#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_balance - Measures the balance factor of
 *			a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);


	return  (binary_tree_balance(tree->left) - binary_tree_balance(tree->right));
}
