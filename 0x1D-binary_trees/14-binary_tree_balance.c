#include "binary_trees.h"
/**
 * heighter_checker - measures height of tree
 * @tree: pointer to root
 * Return: returns max number
 */
size_t height_checker(const binary_tree_t *tree)
{

	int max = 0;

	if (tree == NULL)
		return (0);
	if (height_checker(tree->left) < height_checker(tree->right))
		max = height_checker(tree->right);
	else
		max = height_checker(tree->left);
	return (1 + max);
}

/**
 * binary_tree_balance - measures balance of tree
 * @tree: pointer to root
 * Return: returns the balance or 0 if NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	static int bigL, bigR;

	if (tree == NULL)
		return (0);

	bigL = height_checker(tree->left);
	bigR = height_checker(tree->right);
	return (bigL - bigR);
}
