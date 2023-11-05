#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[]={15,28,12,20};
    int *ptr=array;
    int min=*ptr;
    for(int i=0;i<4;i++){
        if(*(ptr+i)< min){
            min =*(ptr +i);
        };
    };
    printf("%d",min);
}