#include <stdio.h>
int main()
{
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int MainorAB = (a+b+abs(a-b))/2;
int Mainor = (MainorAB + c + abs(MainorAB-c))/2;
printf ("%d eh o maior\n",Mainor);


return 0;
}
