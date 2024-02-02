#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0  ){
        printf ("Impossivel calcular\n");
        return 0;
    }
    d=b*b-4*a*c;
    if(d>=0)
    {
        double r1 = (-b+sqrt(d))/(2*a);
        double r2 = (-b-sqrt(d))/(2*a);
        printf ("R1 = %.5lf\nR2 = %.5lf",r1,r2);
    }
    else{
         printf ("Impossivel calcular\n");
        return 0;
    }


return 0;
}
