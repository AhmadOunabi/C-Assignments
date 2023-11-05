#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int array[10];
    int *ptr=array;
    int sum=0;
    for(int i=0;i<10;i++){
        printf("Enter your Number: \n");
        scanf("%d",(ptr+i));
        sum=i;
    };
    for(sum;sum>=0;sum--){
        printf("%d \n", ptr[sum]);
    }
}
