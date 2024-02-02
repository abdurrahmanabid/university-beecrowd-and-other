#include <stdio.h>
struct linked
{
    int a;
    struct linked *next;
};
int main()
{
    struct linked *head = malloc (sizeof(struct linked));
    head->a=100;
    head->next=NULL;

    struct linked *num1 = malloc(sizeof(struct linked));
    num1->a=55;
    num1->next=NULL;
    head->next=num1;

    struct linked *num2 = malloc(sizeof(struct linked));
    num2->a=550;
    num2->next=NULL;
    num1->next=num2;

    struct linked *ptr;
    ptr=head;

    for (int i=0;i<3 ;i++ ){
        printf("%d\n", ptr->a);
        ptr=ptr->next;
    }



    return 0;
}
