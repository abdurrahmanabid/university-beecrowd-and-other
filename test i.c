#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    float value ;

    printf("User, enter value for 'floor' evaluation...\n");
    scanf("%f", &value);

    /* let's evaluate 'floor' of 'value' */
    int result =  abs(value);

    printf("'floor' of \"%f\": %d\n", value, result);

    return 0;
}
