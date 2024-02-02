#include <stdio.h>

int main()
{
    int array[100], position, c, n, value;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);

    printf("Enter %d elements :\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    inserting(array,n);
    deleting(array,n);
    update(array,n);
    bobble_sort(array,n);
    return 0;
}
void bobble_sort(int a[],int size)
{
    int i,j,temp;
    printf ("\nAfrer sorting : ");
    for(i=0; i<size; i++)
        for(j=i+1; j<size; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    for(i=0; i<size; i++)
    {
        printf("%d\t",a[i]);
    }
}
void update(int a[],int size)
{
    int num,position,c;
    printf("\nEnter the location where you wish to update an element :" );
    scanf("%d", &position);
    printf ("Enter the number that you wish to update : ");
    scanf("%d",&num);
    a[position-1]=num;
    printf("Resultant array is : ");
    int i;
    for (i=0; i<size ; i++ )
    {
        printf ("%d  ",a[i]);
    }

}
void deleting(int a[],int size)
{
    int position,c;
    printf("\nEnter the location where you wish to delete an element:");
    scanf("%d", &position);

    for (c=position; c<size+1; c++)
        a[c-1] = a[c];

    printf("Resultant array is : ");

    for (c = 0; c < size; c++)
        printf("%d  ", a[c]);

}
void inserting (int a[],int size)
{
    int position,value,c;
    printf("Enter the location where you wish to insert an element ");
    scanf("%d", &position);

    printf("Enter the value to insert : ");
    scanf("%d", &value);

    for (c = size - 1; c >= position - 1; c--)
        a[c+1] = a[c];

    a[position-1] = value;

    printf("Resultant array is : ");

    for (c = 0; c <= size; c++)
        printf("%d  ", a[c]);

}

