#include <stdio.h>
int main()
{
int a[10]={1,2,3,5,6,7},i;
printf ("Thats array is : ");
for (i=0;i<6 ;i++ ){

    printf ("% d",a[i]);
}
insert(a);

return 0;
}
void insert(int arr[])
{
    int i,size=6;
    printf ("\nEnter the position: ");
    int pos;
    scanf("%d",&pos);
    printf ("Enter the number :");
    int num;
    scanf("%d",&num);
    for (i=size;i>pos-1 ;i-- ){
        arr[i]=arr[i-1];
    }
arr[pos-1]=num;
printf ("After insert:");
for (i=0;i<size+1 ;i++ ){
    printf (" %d",arr[i]);
}


}
