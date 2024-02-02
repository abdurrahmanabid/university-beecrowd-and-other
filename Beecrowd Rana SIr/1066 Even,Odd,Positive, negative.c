#include <stdio.h>
int main()
{
    int i,num,even=0,odd=0,pos=0,neg=0;
    for (i=0;i<5 ;i++ ){
        scanf("%d",&num);
        if(num%2==0){
            even++;
        }
        if(num%2==1 || num%2==-1){
            odd++;
        }
        if (num>0){
            pos++;
        }
        if(num<0){
            neg++;
        }

    }
printf ("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",even,odd,pos,neg);


return 0;
}
