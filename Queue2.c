#include <stdio.h>
<<<<<<< HEAD
#define size 5
int que[size];
int front=0,rear=0,count=0;
int main()
{
    enqueue(1);
    enqueue(1);
    enqueue(1);
    enqueue(1);
    enqueue(1);
    enqueue(1);
    return 0;
}
void enqueue(int item)
{
    if(!isFull())
    {
        if(rear!=size)
        {
            rear = rear+1;
            que[rear]=item;
        }
        else
        {
            rear=0;
            que[rear]=item;
        }
    count++;
    }
}

int isFull()
{
    if(count>size)
=======
#define m 5
int que[m];
int c;
int f=-1,r=-1;

void dis(){
    for(int i=f;i<= r;i++)
    {
        printf ("%d  ",que[i]);
    }
}

void enqueue(int it)
{
    if(isFull()==1)
        return 0;
    else
    {
        if(r==-1)
        {
            f=0;
            r=0;
        }
        else if (r==m-1)
        {
            r=0;
        }
        else
        {
            r=r+1;
        }
        printf ("Queue");
        que[r]=it;
    }
}
int isFull()
{
    if((f==0 && r==m-1)|| (f==r+1))
    {
        printf ("Full");
        return 1;
    }
}
void dequeue()
{
    if(isEmpty()==-5)
>>>>>>> ad83e4e (first commit)
    {
        return 0;
    }
    else
    {
<<<<<<< HEAD
        printf ("\nQueue is Full");
        return 1;
    }

}
=======
        int i=que[f];
        printf ("%d",i);
        if(f==r)
        {
            printf ("zero");
            r=-1;
            f=-1;
        }
        else if(f==m-1)
        {
            f=0;
        }
        else
        {
            f++;
        }
         printf ("%d --%d\n",f,r);
    }

}
int peek()
{
    int fr=que[f];
    printf ("%d\n",fr);
    return fr;
}
int isEmpty()
{
    if(f==-1)
    {
        printf ("\n\n\n\nEmpty\n");
        return -5;
    }
}
int main()
{
    do
    {
        printf("Enter case \n 1,in\n2,del\n3,empty\n4,Full\n5,empty\n\n");

        scanf("%d",&c);
        int item;
        switch (c)
        {
        case 1:
            scanf("%d",&item);
            enqueue(item);
            break;
        case 2:
            dequeue();
            break;
        case 3 :
            isEmpty();
            break;
        case 4 :
            isFull();
            break;
            case 5 :
            dis();
            break;
        default:
            printf ("Enter right int");
            break;
        }
    }
    while(c!=6);
    return 0;
}
>>>>>>> ad83e4e (first commit)
