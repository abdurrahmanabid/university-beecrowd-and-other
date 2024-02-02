#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>b){
        int h= (24-a)+b;
        printf ("O JOGO DUROU %d HORA(S)\n",h);
    }
    else if (a==b ){
        int h= 24;
        printf ("O JOGO DUROU %d HORA(S)",h);
    }
    else{
        int h = b-a;
        printf ("O JOGO DUROU %d HORA(S)\n",h);
    }


return 0;
}
