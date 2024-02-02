#include <stdio.h>
int main()
{
    float num,sum=0;

    int i,count=0;
    for (i=0;i<6 ;i++ ){
            scanf("%f",&num);
        if(num>0){
            count=count+1;
            sum=sum+num;
        }
    }
    printf ("%d valores positivos\n",count);
    printf ("%.1f\n",sum/count);


return 0;
}
