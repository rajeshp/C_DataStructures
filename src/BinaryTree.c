#include<stdio.h>
#include<stdlib.h>

struct BNode
{
int data;
struct BNode* left;
struct BNode* right;
};

struct BinaryTree
{
struct BNode* root;

};

int main()
{
struct BNode *node1;
struct BNode *node2;
struct BNode *node3;
struct BNode *node4;
struct BNode *node5;
struct BNode *node6;
struct BNode *node7;
struct BNode *node8;

node1 = (struct BNode*) malloc(sizeof(struct BNode));
node2 = (struct BNode*) malloc(sizeof(struct BNode));
node3 = (struct BNode*) malloc(sizeof(struct BNode));
node4 = (struct BNode*) malloc(sizeof(struct BNode));
node5 = (struct BNode*) malloc(sizeof(struct BNode));
node6 = (struct BNode*) malloc(sizeof(struct BNode));
node7 = (struct BNode*) malloc(sizeof(struct BNode));
node8 = (struct BNode*) malloc(sizeof(struct BNode));

node1->data = 1;
node2->data = 2;
node3->data = 3;
node4->data = 4;
node5->data = 5;
node6->data = 6;
node7->data = 7;
node8->data = 8;

node1->left=node2;
node1->right=node3;
node2->left=node4;
node2->right=node5;
node3->left=node6;
node3->right=node7;



printf("\n Hello World \n");
printf("\n PreOrder Traversal using Recursion :  ");
preOrderTraversal(node1);



free(node1);
free(node2);
free(node3);
free(node4);
free(node5);
free(node6);
free(node7);
free(node8);

}


void preOrderTraversal(struct BNode* root)
{
if(root!=NULL)
{
printf("%d  ", root->data);
preOrderTraversal(root->left);
preOrderTraversal(root->right);

}


}


void preOrderTraversalNonRecursive(struct BNode* root)
{

while(true)
{



}

}


