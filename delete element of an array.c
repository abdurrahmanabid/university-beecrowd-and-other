#include <stdio.h>
int main()
{
int a[10]={1,2,2,3,4,5,6,7,8,9},size=10;
printf ("Enter the position :");
int pos;
scanf("%d",&pos);
int i,count=0;
printf ("\nThe number to be Shifted : ");
for (i=pos-1;i<size-1 ;i++ ){

        count ++;
  a[i]=a[i+1];
  printf (" %d",a[i]);
}
a[size-1]=0;
printf ("\nNumber of Shifting : %d",count);
printf ("\nAfter Deletion array will be : ");
for (i=0;i<size-1 ; i++ )
printf ("%d ",a[i]);

return 0;
}
/*#include <stdio.h>
void del(int a[])
{

    int pos,size,i,count=0;
    printf ("Enter element number : ");
    scanf("%d",&size);
    printf ("Enter elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf ("Enter the position that you wont to delete :");
    scanf("%d",&pos);
    printf ("Shifted number : ");
    for (i=pos-1;i<size-1 ;i++ ){
        a[i]=a[i+1];
        printf ("%d ",a[i]);
        count++;
    }
    printf ("\nNumber of Shifting : %d\nAfter deletion : ",count);

    for(i=0;i<size-1;i++){
        printf ("%d ",a[i]);
    }
}
int main()
{
    int b[100];
    del(b);

return 0;
}
*/
