#include <stdio.h>
struct linkList {
    int data;
    struct linkList *ad;
};
int main()
{
    struct linkList *head = malloc (sizeof(struct linkList));

    head->data=40;
    head->ad=NULL;

    struct linkList *first = malloc (sizeof (struct linkList));

    first->data=70;
    first->ad=NULL;
    head->ad=first;

    struct linkList *sec = malloc (sizeof (struct linkList));

    sec->data=70;
    sec->ad=NULL;
    first->ad=sec;

    //checking

    struct linkList *ptr=NULL;
    ptr=head;
    while(ptr!=NULL){
        printf("%d  ",ptr->data);
        ptr=ptr->ad;
    }
    while(ptr!=NULL){
        if(ptr->data==70){
        printf ("Item is found ");
        }
    else{
        printf ("Not Found ");
    }
    }

    return 0;
}
