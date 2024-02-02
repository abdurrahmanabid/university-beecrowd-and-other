#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *link;
};
void check(struct Node *a){
    int count=0;
    if(a==NULL){
        printf ("Empty");
    }
    struct Node *ptr =NULL;
    ptr=a;
    while(ptr != NULL){
        count++;
        printf ("  %d\n",ptr->data);
        ptr=ptr->link;

    }
    printf ("\n%d",count);
}
int main()
{
    struct Node *a= NULL , *b= NULL, *c=NULL;
    a = (struct Node*) malloc(sizeof(struct Node));
    b = (struct Node*) malloc(sizeof(struct Node));
    c = (struct Node*) malloc(sizeof(struct Node));

    a->data = 10;
    a->link=NULL;

    b->data = 20;
    b->link=NULL;

    c->data = 30;
    a->link=NULL;

    a->link = b;
    b->link = c;
    c->link = NULL;
    check(a);

return 0;
}
