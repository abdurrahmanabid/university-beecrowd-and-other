#include <stdio.h>
int main()
{
    int X,Y;
    for (;; )
    {
        scanf("%d %d",&X,&Y);
        if(X==0 || Y==0) {
            printf (NULL);
        }
        else if(X>0 && Y>0){
            printf ("primerio\n");
        }
        else if(X>0 && Y<0){
            printf ("quarto\n");
        }
        else if (X<0 && Y>0){
            printf ("segundo\n");
        }
        else{
            printf ("terceiro\n");
        }


    {

    }
}



return 0;
}
