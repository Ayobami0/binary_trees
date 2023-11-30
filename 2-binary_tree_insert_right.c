#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - Inserts a node
 *		as the right-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the newly created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);
	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode || !parent)
		return (NULL);

	newNode->n = value;
	newNode->right = NULL;
	newNode->left = NULL;
	newNode->parent = parent;

	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}
