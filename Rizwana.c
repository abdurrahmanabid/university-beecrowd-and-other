#include <stdio.h>
#include <stdlib.h>
struct linkList {
    int data;
    struct linkList *ad;
} *first;
int main()
{
    first = malloc(sizeof(struct linkList));
    scanf("%d",&first->data);
    first->ad = NULL;

    struct linkList *sec = malloc(sizeof(struct linkList));
    scanf("%d",&sec->data);
    sec->ad=NULL;
    first->ad=sec;


    struct linkList *third = malloc(sizeof(struct linkList));
    scanf("%d",&third->data);
    third->ad=NULL;
    sec->ad=third;
    printf ("Entered data : \n");

    struct linkList *check;
    check = first;
    while(check != NULL){
        printf ("%d \n",check->data);
        check=check->ad;
    }

    return 0;
}
