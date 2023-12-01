#include "binary_trees.h"
#include <stddef.h>

int _height(binary_tree_t *tree);
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
		return (0);

	return  (_height(tree->left) - _height(tree->right));
}

/**
 * _height - Traverses a binary tree and counts the height
 *
 * Description: Recursively traverses the tree and 
 *	returns the longest path
 *
 *	Return: (int) the height of the tree.
 */
int _height(binary_tree_t *tree)
{
	int leftHeight;
	int rightHeight;

	if (!tree)
		return (0);
	leftHeight = _height(tree->left);
	rightHeight = _height(tree->right);

	if (leftHeight > rightHeight)
		return (leftHeight + 1);
	else
		return (rightHeight + 1);
}
