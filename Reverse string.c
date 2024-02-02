#include <stdio.h>
int main()
{
    char ch[20]="Abid";
    char ch2[20];
    int j = strlen(ch);
    for(int i=0;i< 4 ;i++)
    {
        ch2[i]=ch[j-1];
        j--;
    }
    printf ("%s",ch2);
    return 0;
}
