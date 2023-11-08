#include <stdio.h>
#include <stdlib.h>

int occurence(int *ptr_array,int *ptr_length,int *ptr_num){
    int counter=0;
    for(int i=0;i<*ptr_length;i++){
        if (*(ptr_array+i)==*ptr_num){
            counter+=1;
        };
    };
    if(counter==0){
        counter=-1;
    };
    return counter;

}

int main(void){
   int array[]={3,3,3,3,1,9,-90};
   int len=7;
   int ref=100;

   int function= occurence(&array,&len,&ref);
   printf("%d",function);
}