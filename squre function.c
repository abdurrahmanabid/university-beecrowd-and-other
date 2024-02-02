#include <stdio.h>
int main()
{
int num;
printf ("Enter a number:");
scanf("%d",&num);
int res =squre (num);
printf ("Squre : %d",res);
return 0;
}
int squre (int a)
{
    return a*a;
}
