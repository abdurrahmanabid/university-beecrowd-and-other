#include <stdio.h>
int binary (int a[],int end);
int main()
{
    int arr[100];
    int size;
    printf ("Enter array size : ");
    scanf("%d",&size);
    int retValue = binary(arr,size);
    if (retValue==0){
        printf ("Item is not found \n");
    }
    else{
        printf ("Item is found in %d position ",retValue);
    }

    return 0;
}
int binary (int a[],int s)
{
    printf ("Enter sorted elements of array : ");
    for (int i=0; i<s ; i++ )
    {
        scanf("%d",&a[i]);
    }
    int end =s-1;
    int beg = 0;
    printf ("Enter the the number that you want to find : ");
    int item;
    scanf("%d",&item);
    int mid;

    mid=(beg+end)/2;
    while (beg<=end)
    {
        if(a[mid]==item)
        {
            return mid+1;
        }
        else if(a[mid]>item)
        {
            beg=mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
   return 0;

}
