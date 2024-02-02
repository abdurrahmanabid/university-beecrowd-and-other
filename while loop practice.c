#include <stdio.h>
int main()
{
    int i=0;
    for(i=0;i<5 ;i++)
    {
        if (i==1){
            continue;
        }
        printf("%d",i);


    }
   /* while(i<5)
        {

    }*/
    return 0;
}
