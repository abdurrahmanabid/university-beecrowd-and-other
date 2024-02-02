#include <stdio.h>
int main()
{
    int a[1000];
    int N,i;
    scanf("%d",&N);
        for (i=0;i<N ;i++ ){
                scanf("%d",&a[i]);


        }
    for (i=0;i<N ;i++ ){

        if (a[i] %2== 0 && 0<a[i])
        {
            printf ("EVEN POSITIVE\n");
        }
        else if(a[i]%2==0 && 0>a[i])
        {
            printf ("EVEN NEGATIVE\n");
        }
        else if ((a[i]%2==1 || a[i]%2==-1)&& a[i]>0)
        {
            printf ("ODD POSITIVE\n");
        }
        else if ((a[i]%2==1 || a[i]%2==-1)&& a[i]<0)
        {
            printf ("ODD NEGATIVE\n");
        }
        else{
            printf ("NULL\n");
        }
    }



return 0;
}
