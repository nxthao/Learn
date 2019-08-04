#include <stdio.h>

typedef struct 
{
	int data;
	struct Tree_t *left;
	struct Tree_t *right;

}Tree_t;

Tree_t *CreateNode(int newData)
{
	Tree_t *newNode;
	newNode = malloc(sizeof(Tree_t));
	newNode->data = newData;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void DisplayTree(Tree_t *node)
{
	Tree_t *tmpNode;
	if (node == NULL)
	{
		printf("The tree is empty\n");
	}
	else
	{
		printf("\t Parent node: %d\n", node->data);
		if (node->left != NULL)
		{
			tmpNode = node->left;
			printf("Left node: %d \t", tmpNode->data);
		}
		if (node->right != NULL)
		{
			tmpNode = node->right;
			printf("Right node: %d\n", tmpNode->data);
		}

		printf("\n");
	}
}

void main()
{
	Tree_t *node, *tmp;
	node = NULL;
	node = CreateNode(2);
	node->left = CreateNode(3);
	node->right = CreateNode(4);
	// node->right->right = CreateNode(5);

	DisplayTree(node);

	tmp = node->right;
	tmp->left = CreateNode(7);
	tmp->right = CreateNode(5);
	DisplayTree(tmp);
}