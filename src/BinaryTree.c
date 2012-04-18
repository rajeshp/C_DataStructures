#include<stdio.h>
#include<stdlib.h>
//#include "stack.c"


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

struct stacknode
{
struct BNode* data;
struct stacknode* next;
}; 
struct stack
{
struct stacknode* top;

}; 


void preOrderTraversal(struct BNode* root);
void preOrderTraversalNonRecursive(struct BNode* root);




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
printf("\n PreOrder Traversal Non Recursive:  ");
preOrderTraversalNonRecursive(node1);



printf("\n");


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
struct stack* mystack;
struct BNode* t;
mystack = (struct stack*) malloc(sizeof(struct stack));


while(1)
{
	while(root!=NULL)
	{
		push(mystack,root);
	printf("%d ", root->data);
		root=root->left;
	}
//	printStack(mystack);
	if(mystack->top==NULL)
	break;

	t= pop(mystack);
	if(t->right!=NULL)
		push(mystack,t->right);
}

 }

struct BNode* pop(struct stack* s)
{
	struct stacknode* t;
	if(isStackEmpty(s)!=1)
	{
	 t = s->top;
	s->top=t->next;
	return t->data;
	}

	return NULL;


}

int isStackEmpty(struct stack* s)
{
	if(s->top!=NULL)
	return 0;
	else
	return 1;
}

void push(struct stack* s , struct BNode* b)
{
if(b!=NULL)
{
struct stacknode* newstacknode = (struct stacknode*) malloc(sizeof(struct stacknode));
newstacknode->data = b;
newstacknode->next = s->top;

s->top = newstacknode;
}

} 

void printStack(struct stack* s)
{
	struct stacknode* temp= s->top;

	while(temp!=NULL)
	{struct BNode* b= temp->data;
	printf("%d ->", b->data);

	temp=temp->next;
	}

}


