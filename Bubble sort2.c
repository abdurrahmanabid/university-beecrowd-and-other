#include <stdio.h>
int main()
{
    printf ("Enter the size of the array:");
    int n;
    scanf("%d",&n);
    printf ("Enter %d numbers :",n);
    int a[n];
    for(int i=0; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n-1 ; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
    printf ("After sorting : ");
    for(int i=0; i<n ; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
