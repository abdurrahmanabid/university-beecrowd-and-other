#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int a[100],i;
    printf("Enter the elements of array :\n");
    for(i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" elements of array :");
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
    insert(a,n);
    deleteValue(a,n);
    update(a,n);
    bubble(a,n);
    return 0;
}
void update(int a[],int n)
{
    int pos;
    printf("\nEnter the position : ");
    scanf("%d",&pos);
    scanf("Enter the number :");
    int num;
    scanf("%d",&num);
    a[pos]=num;
    int i;
    printf ("After update : ");
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
}
void insert(int a[],int n)
{
    int insrt,temp,i;
    printf("\nEnter inserting value: ");
    scanf("%d",&insrt);

    for(i=1; i<=n; i++)
    {
        if(a[i]>insrt)
        {
            temp = i;
            break;
        }
    }
    for(i=n; i>=temp; i--)
    {
        a[i+1] = a[i];
    }
    a[temp] = insrt;
    printf("\nAfter inserting value: ");
    for(i=1; i<=n+1; i++)
    {
        printf("%d ",a[i]);
    }
}
void deleteValue(int a[],int n)
{
    int delValue,i,temp;
    printf("\nEnter deleting value: ");
    scanf("%d",&delValue);

    for(i=1; i<=n; i++)
    {
        if(a[i]==delValue)
        {
            temp = i;
        }
    }
    for(i=temp; i<=n; i++)
    {
        a[i] = a[i+1];
    }

    printf("\nAfter Deleting value: ");
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
}
void bubble(int a[],int n)
{
    int i,j,temp;
    for(i=0; i<=n; i++)
    {
        for(j=1; j<=n-i-1; j++)
        {
            if(a[j]<a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("\nbubble sort: ");
    for(i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
}
