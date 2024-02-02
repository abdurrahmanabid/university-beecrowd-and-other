#include <stdio.h>
int main()
{
int a=3,b=5,temp;
printf ("after:\n%d\n%d\n\n",a,b);
//swap method 1 (mostly used)


temp=a;   //a temp er vitor rakhlam
a=b;      //b er value a er vitor rakhlam
b=temp;   // again temp er value(a) b er vitor rakhlam
printf ("before:\n%d\n%d\n\n",a,b);

// method 2

int x=6,y=2,sum;
printf ("after:\n%d\n%d\n\n\n",x,y);

sum=x+y;     //sum er  vitor x,y both value rakhlam
x=sum-x;     //swaping er jonno y er value (sum-x) x er vitor
y=sum-y;     // "

printf ("berore:\n%d\n%d\n\n\n",x,y);

return 0;
}
