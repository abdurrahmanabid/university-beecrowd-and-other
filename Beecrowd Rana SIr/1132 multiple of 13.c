#include <stdio.h>
int main()
{
    int x,y,mul=0,i;
    scanf("%d %d",&x,&y);
    if(x>y){
        int temp=x;
        x=y;
        y=temp;
    }
    for ( i=x;i<y ;i++ ){
        if(i%13!=0){
            mul=mul+i;
        }
    }
    printf ("%d\n",mul);

return 0;
}
