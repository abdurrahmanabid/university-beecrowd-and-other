#include <stdio.h>
int stack[3],max=3,top=-1;
int isFull()
{
    if(top == max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isEmty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int peek()
{
    if (top >=0)
    {
        return stack[top];
    }
}

void push(int x)
{
    if(max-1<=top)
    {
        printf ("Overflow\n\n\n");
    }
    else
    {
        top=top+1;
        stack[top]=x;
        printf ("Insert : %d\n",x);
    }
}
int pop()
{
    if(top<0)
    {
        printf("Underflow\n");
    }
    else
    {
        int val=stack[top];
        top=top-1;
        printf ("Delete : %d\n",val);
        return val;
    }
}
int main()
{
    push(5);
    push(7);
    push(9);
    push(2);
    pop();
    pop();
    pop();
    pop();
    push(9);
    push(2);
    push(2);
    int r= peek();
    printf ("\n%d",r);
    printf ("\n%s", isFull()?"true":"false");
    printf ("\n%s", isEmty()?"true":"false");
    return 0;
}
