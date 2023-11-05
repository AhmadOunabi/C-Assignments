#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[]={3,5,7,9};
    int *ptr=array;
    int sum=0;
    for (int i=0;i<4;i++){
        sum+=*(ptr+i);

    };
    printf("SUM is : %d", sum);
}