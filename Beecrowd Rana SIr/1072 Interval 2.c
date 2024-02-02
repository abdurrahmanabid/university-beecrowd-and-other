#include <stdio.h>
int main()
{
    int N,i,a,in=0,out=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a);
        if(a<=20 && a>=10){
            in++;
        }
        else{
            out++;
        }
    }
    printf ("%d in\n%d out\n",in,out);



return 0;
}
