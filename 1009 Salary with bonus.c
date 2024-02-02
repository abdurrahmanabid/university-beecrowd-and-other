#include <stdio.h>
int main()
{
    char name[40];
    scanf("%s",&name);
    double salary,sale;
    scanf("%lf %lf",&salary,&sale);
    double bon = (15* sale)/100;
    double salBon = salary + bon;
    printf ("TOTAL = R$ %.2lf\n",salBon);


return 0;
}
