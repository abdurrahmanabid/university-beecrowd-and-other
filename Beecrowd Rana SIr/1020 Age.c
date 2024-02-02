#include <stdio.h>
int main()
{
    int age;
    scanf("%d",&age);
    int y=age%365;
    int y1=age/365;
    int m=y%30;//day
    int m1=y/30;
    printf ("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y1,m1,m);


return 0;
}
