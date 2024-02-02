#include <stdio.h>
int main()
{
int a[100]={1,3,4,5,6,7,8,9,10}, size=9;
int i;
 for (i=0;i<size ;i++ )
    printf("%d,",a[i]);
printf ("Which position? : ");
int pos;
scanf("%d",&pos);
printf ("Enter the number : ");
int num;
scanf("%d",&num);

for (i=pos;i<size;i++ ){
    a[i]=a[i-1];
}
a[pos-1]=num;
for (i=0;i<size+1 ;i++ ){
    printf("%d,",a[i]);
    }
return 0;
}
