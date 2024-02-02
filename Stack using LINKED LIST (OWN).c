#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *ad;
}*top=NULL;
void push(int data);
int main()
{

    int op;

    do
    {
        printf ("\nEnter the case:\n1  push\n2   pop\n3   display\n4   exit\n");
        scanf("%d",&op);
        switch (op)
        {
        case 1 :
            printf ("Enter a number for insert :");
            int n;
            scanf("%d",&n);
            push(n);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4 :
            printf("EXIT");
            break;
        default :
            printf("Enter a right number .");

        }
    }
    while(op!=4);
    return 0;
}
void push(int data)
{
    struct stack *newNode=malloc(sizeof(struct stack));
    newNode->data=data;
    if(top==NULL)
    {
        newNode->ad=NULL;
    }
    else
    {
        newNode->ad = top;
    }
    top=newNode;
}
void pop()
{
    struct stack *temp=top;
    if (top==NULL)
    {
        printf ("Stack is Empty\n");
    }
    else
    {
        printf ("Poped number is : %d",top->data);
        top = temp->ad;
        free(temp);
    }
}
void display(){
    while(top!=NULL){
        printf ("\n%d",top->data);
        top=top->ad;
    }
}
