#include <stdio.h>
int main()
{
int a[10],n,count=0;
printf ("Enter array size : ");
scanf("%d",&n);
printf ("Enter elements of array : ");
int i;
for (i=0 ;i<n ;i++ ){
    scanf("%d",&a[i]);
}
printf ("Enter the number that you want to find : ");
int num;
scanf("%d",&num);
for (i=0;i<n ;i++ ){
    if(a[i]==num){
        count=i+1;
        break;
    }
}
if (count ==0){
    printf ("Not found! ");
}
else {
printf ("Found\nthe position of searching number : %d",count);
}
return 0;
}
