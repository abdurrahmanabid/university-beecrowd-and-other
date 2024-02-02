#include <stdio.h>
int main()
{
    printStar();
    return 0;
}
void printStar(){
    int i , j;
    int row;
    scanf("%d",&row);
    for(i=0;i<=row ;i++)
    {
        for(int s = i ; s<=row ; s++){
            printf (" ");
        }
        for(j=0;j<=i ;j++)
        {
            printf ("* ");
        }
        printf ("\n");
    }
    for(i=0;i<=row ;i++)
    {
        for(j=i ; j>=0 ; j--)
        {
            printf (" ");
        }
        for ( int a = i; a<=row ;a++ ){
            printf ("* ");
        }
        printf ("\n");
    }
}
