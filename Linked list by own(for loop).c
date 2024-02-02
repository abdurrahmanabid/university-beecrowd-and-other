#include <stdio.h>
int num;
struct node {
    int data;
    struct node *ad;
};
void createNodeList();
int main()
{
    printf ("Enter number of NODE : ");
    int size;
    scanf("%d",&size);
    createNodeList(size);

    return 0;
}

void createNodeList(int n){
    struct node *ptr,*temp,*head = malloc(sizeof(struct node));
    if(head==NULL){
        printf ("You dont have any space\n");
    }else{
        printf ("Enter first number : ");
        scanf("%d",&num);
        head->data=num;
        head->ad=NULL;
        temp=head;
    }
    for(int i=2;i<=n ;i++)
    {
        struct node  *next=malloc(sizeof(struct node));
        if(next==NULL){
            printf ("Your space isFull\n");
            break;
        }else{
            printf ("enter %d nd number : ",i);
            scanf("%d",&num);
            next->data=num;
            next->ad=NULL;
            temp->ad=next;
            temp=temp->ad ;
        }
    }
    ptr=head;
    printf ("Entered linked list is :");
    while(ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->ad;
    }
}
