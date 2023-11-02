#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first - pointer to the first node
 * @second - pointer to the second node
 *
 * Return: returns NULL or lowest common ancestor node
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp1 = first;
	const binary_tree_t *temp2 = second;

	while (temp1)
	{
		temp2 = second;
		while (temp2)
		{
			if (temp1 == temp2)
				return (binary_tree_t *)temp1;
			temp2 = temp2->parent;
		}
		temp1 = temp1->parent;
	}

	return NULL;
}

