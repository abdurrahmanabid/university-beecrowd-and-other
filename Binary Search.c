#include <stdio.h>
int main()
{
    int a[100];
    printf ("Enter size of Array : ");
    int size;
    scanf("%d",&size);
    printf ("Enter sorting array element(s) : ");
    for (int i=0;i<size ;i++ ){
        scanf("%d",&a[i]);
    }
    printf ("Enter a number that you want to find : ");
    int item;
    scanf("%d",& item);

    int beg=0,end=size-1;
    int mid;
    while (beg<=end)
    {   mid =(beg + end)/2;
        if(a[mid]==item)
        {
            printf ("Item is found at position : %d \n index :%d ",mid+1,mid);
            return 0;
        }
        else if(a[mid]<item)
        {
            beg=mid+1;
        }
        else
        {
            end = mid-1;
        }



    }
    printf ("Item is not found ");
    return 0;
}
