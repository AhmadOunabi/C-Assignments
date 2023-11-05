#include <stdio.h>
#include <stdlib.h>

int main(void){
int array1[]={3,5,7,9};
int array2[4];
int *ptr=array1;

for(int i=0;i<4;i++){
    array2[i]=*(ptr+i);
    printf("%d",array2[i]);
};
}