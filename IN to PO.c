#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
        return stack[top--];

}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
        if(x == '^')
            return 3;
    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    gets(exp);
    printf("\n");
    e = exp;

    while(*e != NULL)
    {
        if(isalnum(*e))
            printf("%c ",*e);
        else if(*e == '(' )
            push(*e);
        else if(*e == ')')

        {
            while((x = pop()) != '(')
                printf("%c ", x);

        }
        else if (*e == '^'){
            while(priority(stack[top]) > priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        else
        {
            while(priority(stack[top]) >= priority(*e))
                printf("%c ",pop());
            push(*e);
        }
        e++;
    }

    while(top != -1)
    {
        printf("%c ",pop());
    }return 0;
}
