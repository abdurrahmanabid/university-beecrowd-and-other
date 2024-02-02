<<<<<<< HEAD
#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int item = 1;
    for(int i=0;i<7 ;i++)
    {
        if(item==a[i]){
            printf ("Found,\n position %d ",i+1);
            break;
        }
    }
    return 0;
}
=======
/*                                  --------------------

                                        Normal FUNCTION

                                    ---------------------
*/
#include <stdio.h>
int main()
{
    int a[]={10,5,3,8,9,2},pos=0;
    int i,size=6;
    int num;
    printf ("Enter the number that you want to find: ");
    scanf("%d",&num);
    for(i=0;i<size;i++){
        if(a[i]==num){
            printf ("number is exist\n");
            pos=i+1;
        }

    }
    if(pos==0){
        printf ("Number is not exists");
    }
    if(pos>0){
printf ("%d",pos);
    }


return 0;
}


/*
                                    ---------------------------

                                        USER DEFINE FUNCTION

                                    ---------------------------
*/
/*
#include <stdio.h>
void arr(int arr[]){
    int num,i,count=0,n;
    scanf("%d",&n);
    for (i=0;i<n ;i++ ){
        scanf("%d",&arr[i]);
    }
    printf ("Enter a number that you want to find: ");
    scanf("%d",&num);
    for (i=0;i<n ;i++ ){
        if(arr[i]==num){
            count=i+1;
            printf ("Number is exist.\n");
        }
    }
    if(count==0){
        printf ("Number not exist.");
    }

    if(count>0){
        printf ("The position of %d number is : %d",num,count);
    }

}
int main()

{
    int a[100];
    printf ("Enter number of element(s) :");

    arr(a);




return 0;
}
*/
>>>>>>> ad83e4e (first commit)
