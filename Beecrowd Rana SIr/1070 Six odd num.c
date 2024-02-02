#include <stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    if(num>0){
    for (i=num;i<num+12 ;i++ ){
        if(i%2==1){
            printf ("%d\n",i);
        }

    }

    }

return 0;
}
