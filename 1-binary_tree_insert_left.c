#include "binary_trees.h"
#include <stdlib.h>

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode || !parent)
		return (NULL);

	newNode->n = value;
	newNode->right = NULL;
	newNode->parent = parent;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	else
		newNode->left = NULL;
	parent->left = newNode;

	return (newNode);
}
