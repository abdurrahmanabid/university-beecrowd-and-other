#include <stdio.h>
int main()
{
    int a=2002;
    int n;
    for (int i=0;i<100 ;i++ ){
    scanf("%d",&n);

    if(n==a){
        printf ("Acesso Permitido\n");
        break;
    }
    else{
        printf ("Senha Invalida\n");
    }

    }



return 0;
}
