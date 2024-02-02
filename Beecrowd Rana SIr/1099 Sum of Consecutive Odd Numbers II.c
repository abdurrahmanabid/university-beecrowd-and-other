#include <stdio.h>
int main()
{
    int N,a[100],count;
    scanf ("%d",&N);
    int X,Y,sum=0;
    int i;
    for (i=0; i<N ; i++ )
    {
        scanf("%d %d",&X,&Y);
        if (X==Y || X+1==Y || Y+1==X){
            sum=0;
        }
        else{
        if(X>Y){
            int temp=X;
            X=Y;
            Y=temp;
        }
        for(int j=X+1;j<Y;j++){
            if(j%2==1 || j%2==-1){
                sum=sum+j;
            }
        }
        }
        printf ("%d\n",sum);
        sum=0;
    }






    return 0;
}

