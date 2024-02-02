#include <stdio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *ad;
};
struct L2
{
    int data;
    struct L2 *ad;
};
int main()
{
    struct list *head=malloc(sizeof(struct list));
    head->data= 100;
    head->ad = NULL;

    struct list *two=malloc(sizeof(struct list));
    two->data= 40;
    two->ad = NULL;
    head->ad = two;

    struct list *three=malloc(sizeof(struct list));
    three->data= 20;
    three->ad = NULL;
    two->ad=three;
    struct list *ptr;
    ptr = head;
    for (int i=0; i<3 ; i++ )
    {
        printf ("%d\n",ptr->data);
        ptr=ptr->ad;

    }
    //comment
    struct L2 *h=malloc(sizeof(struct L2));
    h->data= 100;
    h->ad = NULL;

    struct L2 *t=malloc(sizeof(struct L2));
    t->data= 40;
    t->ad = NULL;
    h->ad = t;

    struct L2 *th=malloc(sizeof(struct L2));
    th->data= 20;
    th->ad = NULL;
    t->ad=th;
    struct L2 *ptrr;
    ptrr = h;
    for (int i=0; i<3 ; i++ )
    {
        printf ("%d\n",ptrr->data);
        ptrr=ptrr->ad;
    }
    return 0;
}
