#include <stdio.h>
struct linkList {
    int data;
    struct linkList *ad;
};
int main()
{
    struct linkList *head=malloc(sizeof(struct linkList));
    head->data=20;
    head->ad=NULL;

    struct linkList *num1=malloc(sizeof(struct linkList));
    num1->data=30;
    num1->ad=NULL;
    head->ad=num1;

    struct linkList *num2=malloc(sizeof(struct linkList));
    num2->data=20;
    num2->ad=NULL;
    num1->ad=num2;

    struct linkList *ptr;
    ptr=head;
    printf ("After insert : ");//for check or print or traverse the linked list's
    for(int i=0;i<3 ;i++)
    {
     printf ("%d    ",ptr->data);
     ptr=ptr->ad;
    }

    //insert at beginning
    printf ("\ninsert at the beginning : ");
    struct linkList *newHead=malloc(sizeof(struct linkList));
    newHead->data=80;
    newHead->ad=head;
    head=newHead;

    struct linkList *ptr2;
    ptr2=head;
    for(int i=0;i<3+1 ;i++)
    {
     printf ("%d    ",ptr2->data);
     ptr2=ptr2->ad;
    }
    printf ("\nInsert at the ending (including beg) : ");
    //insert at last
    struct linkList *tail=malloc(sizeof(struct linkList));
    tail->data=5;
    tail->ad=NULL;
    head->ad->ad->ad->ad=tail;

    struct linkList *ptr3;
    ptr3=head;
    for(int i=0;i<3+1+1 ;i++)
    {
     printf ("%d    ",ptr3->data);
     ptr3=ptr3->ad;
    }
    //Insert in any position
    printf ("\ninsert on any position : ");
    struct linkList *num3=malloc(sizeof(struct linkList));
    num3->data=321;
    num3->ad=tail;
    num2->ad=num3;


    struct linkList *ptr4;
    ptr4=head;
    for(int i=0;i<3+1+1+1 ;i++)
    {
     printf ("%d    ",ptr4->data);
     ptr4=ptr4->ad;
    }
    return 0;
}
