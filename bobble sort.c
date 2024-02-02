int main(){
        int array[50]={8,4,2,4,3,2,1}, n=7, i, j, temp,pass=0,inter=0,cmpr=0;

        for (i = 0 ; i < ( n - 1 ); i++){
                pass++;
                for (j= 0 ; j < n - i - 1; j++){
                        if(array[j] < array[j+1]){
                                temp=array[j];
                                array[j]   = array[j+1];
                                array[j+1] = temp;
                                inter++;
                        }
                        cmpr++;

                }
        }
        printf ("pass = %d\ninterchange = %d\ncomare = %d",pass,inter,cmpr);
        printf("\nSorted list in descending order : ");
        for ( i = 0 ; i < n ; i++ )
                printf(" %d ", array[i]);
        return 0;
}
