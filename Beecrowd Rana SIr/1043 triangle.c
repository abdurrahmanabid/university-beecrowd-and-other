#include <stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        float p = a+b+c;
        printf ("Perimetro = %.1f\n",p);

    }
    else{
        float area = (a+b)/2*c;
        printf ("Area = %.1f\n",area);
    }



return 0;
}
