#include <stdio.h>
#include <stdlib.h>

int ascending(int *ptr1,int *ptr2){
    int temp=0;
    for (int i=0;i<*ptr2;i++){
        for(int j=i+1;j<*ptr2;j++){
            if(*(ptr1 + j) <  *(ptr1 + i)){
                temp = *(ptr1 + i);
                *(ptr1 + i)=*(ptr1 + j);
                *(ptr1 + j) =temp ;
                continue;
            };
        };
    };
    
    
}

int main(void){
   int array[]={3,5,2,7,1,9,-90};
   int x=7;
    ascending(&array,&x);
    for(int i=0;i<x;i++){
        printf("%d ",array[i]);
    };
}