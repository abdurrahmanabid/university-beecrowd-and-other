/*#include <stdio.h>
int main()
{
    int n, a[5],size =5;
    printf ("Enter elements of your array: ");
    int i;
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf ("Your Entered array is :");
    for (i=0; i<5 ; i++ )
    {
        printf ("%d ",a[i]);
    }
    printf ("Enter the position that you want delete:");
    int pos;
    scanf("%d",&pos);

    printf ("Enter the value : ");
    int value;
    scanf("%d",&value);
    a[pos-1]=value;
    for (i=0; i<size ; i++ )
        printf ("%d ",a[i]);
    return 0;
}*/
#include <stdio.h>
void update(int a[])
{
    int n;
    scanf("%d",&n);
    printf ("Enter elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position that you want to delete : ");
    int pos;
    scanf("%d",&pos);
    printf ("Enter the value that you want to update : ");
    int value;
    scanf("%d",&value);
    a[pos-1]=value;
    printf ("After UPDATE , the array will be : ");
    for (int i=0;i<n ;i++ ){
        printf ("%d ",a[i]);
    }





}
int main()
{
    int arr[100];
    printf ("Enter the element number(s) of array : ");
    update(arr);


    return 0;
}
