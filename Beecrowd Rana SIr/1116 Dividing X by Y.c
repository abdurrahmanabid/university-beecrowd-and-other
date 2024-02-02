#include <stdio.h>
int main()
{
    int X,Y,n;
    scanf("%d",&n);
    for (int i=0;i<n ;i++ ){
        scanf("%d %d",&X,&Y);
        if(Y==0){
            printf ("divisao impossivel\n");
        }else{
        printf ("%.1f\n",(float)X/Y);

        }

    }



return 0;
}
