#include <stdio.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
int repeated(char *ptr1,char *ptr2){
    for(int i=0;i<*ptr2;i++){
        for(int j=i+1;j<*ptr2;j++){
            	if(*(ptr1+i)== *(ptr1+j)){
                    return FALSE;
                    continue;
                }
        }
    }
    ;
}

int main(void){
    char str[]="hello";
    int len = strlen(str);
    int staus=repeated(&str,&len);
    printf("%d", staus);
}