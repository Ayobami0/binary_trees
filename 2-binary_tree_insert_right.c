#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode || !parent)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->parent = parent;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	else
		newNode->right = NULL;
	parent->right = newNode;

	return (newNode);
}
