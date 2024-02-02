#include <stdio.h>
int main()
{
double b,h;
printf ("Enter BASE and HIGHTH :");
scanf("%lf %lf",&b,&h);
double area= triangleArea(b,h);
printf ("Area of a triangle :%lf",area);

return 0;
}
int triangleArea(double a, double b)
{
    double res= 0.5*a*b;
    return res;
}
