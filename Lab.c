
#include <stdio.h>
struct linkList {
    int data;
    struct linkList *ad;
}*top=NULL;
int main()
{
    push();
    push();
    push();
    push();
    while(top!=NULL){
        printf ("%d",top->data);
        top=top->ad;
    }
    pop();
    while(top!=NULL){
        printf ("%d",top->data);
        top=top->ad;
    }
    return 0;
}

void push(){
    struct linkList *newNode=malloc(sizeof(struct linkList));
    if (newNode==NULL){
        printf("Overflow\n");
    }
    printf ("enter a value : ");
    int val;
    scanf("%d",&val);
    newNode->data=val;
    if(top==NULL){
        newNode->ad=NULL;
    }else{
        newNode->ad=top;
    }
    top=newNode;
}
void pop(){
    struct linkList *temp=top;
    if(top==NULL){
        printf ("Stack is empty, Underflow\n");
    }
    else{

        top=temp->ad;
        free(temp);
    }
}
