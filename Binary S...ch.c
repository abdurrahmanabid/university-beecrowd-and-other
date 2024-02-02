#include <stdio.h>
int main()
{
    int arr[100],s;


    printf ("Enter the Array Size :");
    scanf("%d",&s);
    int ret=binary(arr,s);
    if (ret==s){
        printf ("NOT FOUND");
    }
    else{
            printf ("Number is found at %d position ",ret);
    }


return 0;
}
int binary(int a[],int size){
    printf ("Enter a Sorted array : ");
    int i;
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int beg=0,end=size-1;

    printf ("Enter a number that you want to find : ");
    int item;
    scanf("%d",&item);
    int mid;
    while(beg<=end){
     mid=(beg+end)/2;
    if(a[mid]==item){

        return mid+1;

    }
    else if (item<a[mid]){
        beg= mid+1;
    }
    else{
        end=mid-1;
    }
    }
    return size;
}
