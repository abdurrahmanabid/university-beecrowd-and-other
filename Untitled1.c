#include <stdio.h>
<<<<<<< HEAD
int main()
{
    printf("Hello wordl");
    return 0;
}
=======
#include <stdlib.h>
#define LIMIT 5
int stack[LIMIT];
int queue[LIMIT];
int top=-1,front = -1, rear = -1;
int i;
int choice;
char op;
void push();
void pop();
void peek();
void isFull();
void isEmpty();
void enQueue(int value);
void deQueue();
void peekQ();
void isFullQ();
void isEmptyQ();
int main()
{
    do
    {
        printf ("Choose operation :\n\t1. stack\n\t2. queue\n\t3. Exit\n\n");
        printf ("Enter Your choice : ");
        scanf("%d",&op);
        if(op==1)
        {
            do
            {
                printf("1. push\n2. pop\n3. peek\n4. isFull\n5. isEmpty\n6. Menu\n");
                printf("Enter your choice:");
                scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    peek();
                    break;
                case 4:
                    isFull();
                    break;
                case 5:
                    isEmpty();
                    break;
                case 6:

                    break;
                default:
                    printf("Sorry, invalid choice!\n");
                    break;
                }
            }
            while(choice!=6);
        }
        else if(op==2)
        {
            do{
            printf("1. enqueue\n2. dequeue\n3. peek\n4. isFull\n5. isEmpty\n6. Menu\n");
            printf("Enter your choice:");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf ("Enter a number : ");
                int item;
                scanf("%d",&item);
                enQueue(item);


                break;
            case 2:
                deQueue();
                break;
            case 3:
                peekQ();
                break;
            case 4:
                isFullQ();
                break;
            case 5:
                isEmptyQ();
                break;
            case 6:

                break;
            default:
                printf("Sorry, invalid choice!\n");
                break;
            }
            }
            while(choice !=6);
        }
    }
    while(op!=3);
    return 0;
}
void push()
{
    int element;
    if(top == LIMIT- 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the element to be inserted:");
        scanf("%d", &element);
        top++;
        stack[top]=element;
    }
}
void pop()
{
    int element;
    if(top == -1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        element=stack[top];
        printf("The deleted item is %d\n",stack[top]);
        top--; // The element below the topmost element is deleted
    }
}
void peek()
{
    printf ("Top is : %d",stack[top]);
    printf ("\n\n");
}
void isFull()
{
    if(top == LIMIT- 1)
    {
        printf("Stack underflow\n");
    }
    else
    {
        printf ("False\n");
    }
}
void isEmpty()
{

    if(top == -1)
    {
        printf("Stack underflow\n"); // Stack is empty
    }
    else
    {
        printf ("False\n");
    }
}
void enQueue(int value) {
  if (rear == LIMIT - 1)
    printf("\nQueue is Full!!");
  else {
    if (front == -1)
      front = 0;
    rear++;
    queue[rear] = value;
  }
}
void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", queue[front]);
    front++;
    if (front == rear)
      front = rear = -1;
  }
}
void peekQ(){
    printf ("Front : %d\n",queue[front]);
}
void isFullQ(){
    if((front==0 && rear == LIMIT-1)|| (front == rear+1))
        printf ("Full\n");
    else
        printf ("False\n");
}
void isEmptyQ(){
    if(front==-1)
        printf ("Empty\n");
    else
        printf ("False\n");
}
>>>>>>> ad83e4e (first commit)
