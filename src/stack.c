#include<stdio.h>
#include<stdlib.h>


struct stacknode
{
int data;
struct stacknode* next;
};

struct stack
{
struct stacknodei* top;
int size;

};

void push(struct stack* stack, int n);
struct stacknode* pop(struct stack* stack);


/*
int main()
{
struct stack* mystack;

mystack = (struct stack*) malloc(sizeof(struct stack));

push(mystack, 1);
push(mystack, 2);
push(mystack, 3);
push(mystack, 4);

struct stacknode* temp;
temp = pop(mystack);
printf(" %d \n", temp->data);

printStack(mystack); 

free(temp);
deleteStack();

return 1;
}

*/

void push(struct stack* stack, int n)
{
struct stacknode* temp;
temp = (struct stacknode*) malloc(sizeof(struct stacknode));

temp->data= n;

temp->next = (struct stacknode*) stack->top;
stack->top = (struct stacknode*)temp;

}

struct stacknode* pop(struct stack* stack)
{
struct stacknode* temp;
if(stack->top==NULL)
return temp;
temp = (struct stacknode*)stack->top;
stack->top = (struct stacknode*)temp->next;

return temp;
}


void printStack(struct stack* stack)
{
struct stacknode* temp;
temp=stack->top;

while(temp!=NULL)
{
printf("\t \t | %d | \n ", temp->data);
temp= (struct stacknode*)temp->next;
}

}

void deleteStack(struct stack* stack)
{
struct stacknode* temp;
temp= (struct stacknode*)stack->top;
struct stacknode* temp1;
temp1= (struct stacknode*)stack->top;


while(temp!=NULL)
{
temp1= (struct stacknode*)temp->next;
free(temp);
temp=temp1;
}

//free(stack);

}
