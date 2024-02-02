#include <stdio.h>
int main()
{
    int N;
    printf ("%d",&N);
    int X,Y;
    int i;
    for (i=0;i<N ;i++ ){
        scanf("%d %d",&X,&Y);

    }
    if (X>Y){
        int tmep=X;
        X=Y;
        Y=temp;
    }
    int sum=0;

    for(i=X;i<Y;i++){
        if(i%2==1){
            printf ("%d\n",i);
        }
    }



return 0;
}
