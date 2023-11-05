#include <stdio.h>
#include <stdlib.h>

int main(void){
    char string[]="Ahmad";
    char *ptr= &string[0];
    int sum=0;
    int i=0;
    while(*(ptr+i)!='\0'){
        i++;
        sum=i;
    };
    printf("%d",sum);
}