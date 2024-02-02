#include <stdio.h>
#include <ctype.h>
char stack[100];
int top = -1;
char pop();
int priority(char e);
void reverse(char ex[]);
int main()
{
    printf ("Enter the expression : ");

    char ex[100],x;
    gets(ex);
    int i=0;
    reverse(ex);
    while(ex[i] !=NULL)
    {
        if (isalnum(ex[i]))
            printf ("%c",ex[i]);

        else if(ex[i] == ')')
        {
            push(ex[i]);
        }
        else if(ex[i]=='(')
        {
            while((x=pop()) != NULL)
            {
                printf ("%c",x);
            }
        }
        else
        {
            while (priority(stack[top])> priority(ex[i]))
                printf ("%c",pop());
            push(ex[i]);
        }
        i++;

    }
    if(top != -1)
        {
            printf ("%c",pop());
        }
    return 0;
}
void reverse(char ex[])
{
    char temp[100];
    int size = strlen(ex),i=0;
    while(ex[i] != NULL)
    {
        temp[i] = ex[size-1];
        size--;
        i++;
    }
    strcpy(ex,temp);
}

void push(char e)
{
    stack[++top]=e;
}

char pop()
{
    return stack[top--];
}
int priority(char e)
{
    switch (e)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;


    }
}
