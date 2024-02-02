#include <stdio.h>
int main()
{
    int a[5]={2,113,45,3456,6};
    int i,pos;
    for(i=0;i<5;i++){

      a[i]=a[i]>a[i+1];
    }

printf ("%d",a[i]);


return 0;
}
