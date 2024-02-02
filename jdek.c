#include <stdio.h>
struct linkList {
    int data;
    struct linkList *ad;
};
int main()
{
    struct linkList *temp, *a = malloc (sizeof (struct linkList));
    scanf("%d",&a->data);
    a->ad=NULL;
    temp = a;
    for(int i=0;i<5 ;i++)
    {
        struct linkList *b = malloc (sizeof (struct linkList));
        scanf("%d",&b->data);
        b->ad=NULL;
        temp->ad=b;
        temp=temp->ad;
    }
    while (a!=NULL ){
        printf ("%d",a->data);
        a=a->ad;
    }

    return 0;
}
