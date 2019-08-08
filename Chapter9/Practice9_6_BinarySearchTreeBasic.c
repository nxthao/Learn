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
   struct Tree_t *left, *right;
}Tree_t;

Tree_t *CreateNode(int newData)
{
   Tree_t *tmpTree;
   tmpTree = malloc(sizeof(Tree_t));
   tmpTree->data = newData;
   tmpTree->left = NULL;
   tmpTree->right = NULL;
   return tmpTree;
}

void Display(Tree_t *root)
{
   if (root != NULL)
   {
      Display(root->left);
      printf("%d \n", root->data);
      Display(root->right);
   }
}

Tree_t *InsertBinarySearchTree(Tree_t *tmpTree, int newData)
{
   if (tmpTree == NULL)
   {
      tmpTree = CreateNode(newData);
   }
   else if(newData > tmpTree->data)
   {
      tmpTree->right = InsertBinarySearchTree(tmpTree->right, newData);         
   }
   else
   {
      tmpTree->left = InsertBinarySearchTree(tmpTree->left, newData);
   }
   return tmpTree;
}
void main()
{
   Tree_t *root = NULL;
   // Only first element is assign because it is root, we only need root tree
   root = InsertBinarySearchTree(root, 4);
   InsertBinarySearchTree(root, 3);
   InsertBinarySearchTree(root, 6);
   InsertBinarySearchTree(root, 2);
   InsertBinarySearchTree(root, 8);

   // Display the whole element
   Display(root);
}