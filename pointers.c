#include <stdio.h>
#include <stdlib.h>

int main(void){
    int x=10;
    int *ptr1=&x;

    printf("%d \n",*ptr1);       // 10
    printf("\n%d", ptr1);        // Adrress of x 
}