#include <stdio.h>
int main()
{   float n;
    int i,pos=0;
    for (i=0;i<6 ;i++ ){
        scanf("%f",&n);
        if(n>0){
            pos=pos+1;
        }
    }
    printf ("%d valores positivos",pos);



return 0;
}
