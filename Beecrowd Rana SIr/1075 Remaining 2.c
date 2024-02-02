#include <stdio.h>
int main()
{
    int N,i,r=2;
    scanf("%d",&N);
    printf ("%d\n",r);
    for(i=1;i<=10000;i++){
        if (i%N==0){
            printf ("%d\n",i+r);
        }

    }



return 0;
}
