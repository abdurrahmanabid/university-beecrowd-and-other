# include<stdio.h>

int main(){

int i, j, count, temp, number [25];
printf ("Number of element : ");

scanf ("%d",&count);
printf ("Enter %d elements : \n", count);


for( i = 0; i < count ; i++)
    scanf ("%d", & number [i]);

for( i = 1; i < count ; i++)

    temp= number[i];
j=i-1;
while ((temp<number [j])&&(j>=0))
{
number[j+1] = number[j];

    j = j- 1 ;
}
number [j+1]=temp;

printf("Sorted elements : " );
for(i=0; i< count; i++)

printf (" %d", number [i]);

return 0;
}
