#include <stdio.h>
/*
properties:
The left subtree of a node contains only nodes with keys lesser than the node’s key.
The right subtree of a node contains only nodes with keys greater than the node’s key.
The left and right subtree each must also be a binary search tree.
*/

typedef struct
{
	int data;
	Tree_t *left, *right;
}Tree_t;

Tree_t *CreateNode(int newData)
{
	Tree_t *newTree;
	newTree = malloc(sizeof(Tree_t));
	newTree->data = newData;
	newTree->left = NULL;
	newData->right = NULL;
	return 
}

// This function is to arrange the element for binary tree
Tree_t *InsertBinarySearchTree(Tree_t *tmpTree, int newData)
{
	if (tmpTree == NULL)
	{
		return CreateNode(newData);
	}
}
void main()
{
	Tree_t *root = NULL;
	// Only first element is assign because it is root, we only need root tree
	root = InsertBinarySearchTree(root, 2);
}