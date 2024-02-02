#include <stdio.h>
int main()
{
char tn[20];
int i,  n;
printf ("Enter number of team: ");
scanf("%d",&n);

for (i=0;i<n ;i++ )
{   printf ("Enter team number %d :",i+1);
    scanf("%s",&tn[i]);
}
for (i=0;i<n ;i++ )
{
    printf ("team number %d : %s\n",i+1,tn[i]);
}
return 0;
}
