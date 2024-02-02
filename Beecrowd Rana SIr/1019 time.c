#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);
int h1=t%3600;
int h2=t/3600;
int m1=h1%60;//=sec
int m2=h1/60;
printf ("%d : %d : %d",h2,m2,m1);



return 0;
}
