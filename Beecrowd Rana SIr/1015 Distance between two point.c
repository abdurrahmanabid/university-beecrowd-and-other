#include <stdio.h>
int main()
{
double x1,x2,y1,y2;
scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

double a=(pow(x2-x1,2)+pow(y2-y1,2));
double dis=pow(a,0.5);
printf ("%.4lf\n",dis);
return 0;
}
