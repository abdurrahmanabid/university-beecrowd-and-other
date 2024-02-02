#include<stdio.h>
int stack[100],choice,n,top,x;
void push(void);
void pop(void);
void peek(void);
void isFull(void);
void isEmpty(void);
int main()
{
    top=0;
    printf("Enter the size of max stack[100]:");
    scanf("%d",&n);
 do
    {
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                isFull();
                break;
            }
            case 5:
            {
                isEmpty();
                break;
            }
            /*case 6:
            {
                printf("Exit");
                break;
            }*/
            default:
            {
                printf ("\nPlease Enter a valid Choice");
            }

        }
    }
    while(choice!=6);
    return 0;
}
void push()
{
    if(top>=n)
    {
        //printf ("Overflow\n");
        isFull();

    }
    else
    {
        printf("\nEnter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=0)
    {
        return isEmpty();
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}
void peek()
{
    printf("\nThe element is:%d",stack[top]);
}
void isFull()
{
    if(top>=n)
    {
        printf("Stack is full \nOverflow\n\n");
    }
    else
    {
        printf("False\n\n");
    }
}
 void isEmpty()
{
    if(top==0)
    {
        printf("Stack is Empty\nUnderflow");
    }
    else
    {
        printf("False\n\n");
    }
}
