#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float p;
    if (a==1){
        p=4.00;
    }
        else if(a==2){
            p=4.50;
        }
else if(a==3){
            p=5.00;
        }
else if(a==4){
            p=2.00;
        }
else if(a==5){
            p=1.50;
        }
 float t = b* p;
 printf ("Total: R$ %.2f",t);


return 0;
}
