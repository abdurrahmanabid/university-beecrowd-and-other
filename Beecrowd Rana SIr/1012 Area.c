#include <stdio.h>
int main()
{
float A,B,C;
scanf("%f %f %f",&A,&B,&C);
float TA=(0.5*A*C);
printf ("TRIANGULO: %.3f\n",TA);
float CR = 3.14159 * (C*C);
printf ("CIRCULO: %.3f\n",CR);
float TR = 0.5*((A+B)*C);
printf ("TRAPEZIO: %.3f\n",TR);
float QR = B*B;
printf ("QUADRADO: %.3f\n",QR);
float RT=A*B;
printf ("RETANGULO: %.3f\n",RT);
return 0;
}
