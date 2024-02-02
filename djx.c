#include <stdio.h>
#include <ctype.h>
int main()
{
    char a[20];
    gets(a);
    int res = isalnum(a[0]);
    return 0;
}
