#include <stdio.h>
int main()
{
int m;
scanf("%d",&m);
printf ("%d\n",m);
int a100,b100;
  a100=m%100;
  b100=m/100;
printf ("%d nota(s) de R$ 100,00\n",b100);
 int a50=a100%50;
 int b50=a100/50;
printf ("%d nota(s) de R$ 50,00\n",b50);

 int a20=a50%20;
 int b20=a50/20;

printf ("%d nota(s) de R$ 20,00\n",b20);

int a10=a20%10;
 int b10=a20/10;

printf ("%d nota(s) de R$ 10,00\n",b10);
int a5=a10%5;
 int b5=a10/5;


printf ("%d nota(s) de R$ 5,00\n",b5);
 int a2=a5%2;
 int b2=a5/2;

printf ("%d nota(s) de R$ 2,00\n",b2);
int a1=a2%1;
 int b1=a2/1;

printf ("%d nota(s) de R$ 1,00\n",b1);


return 0;
}
