#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - Create a new binary tree node
 *
 * Creates a new node for a binary tree with the given value.
 *
 * @parent: Pointer to the parent node of the new node.
 * @value: Value to be stored in the new node.
 *
 * Return: Pointer to the new node or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	if (!parent)
		return (newNode);

	return (newNode);
}
