#include <stdio.h>
#include <stdlib.h>

int holes(int x){
    int sum=0;
    while(x!=0){
        int remain =x % 10;
        x=x/10;
        
        switch(remain){
            case 0:
            sum+=1;
            break;
            case 1:
            sum+=0;
            break;
            case 3:
            sum+=0;
            break;
            case 4:
            sum+=1;
            break;
            case 5:
            sum+=0;
            break;
            case 6:
            sum+=1;
            break;
            case 7:
            sum+=0;
            break;
            case 8:
            sum+=2;
            break;
            case 9:
            sum+=1;
            break;
        };
        
    }
    printf("%d",sum);
}

int main(void){
    int num=891;
    holes(num);
    printf("\n %d",num);
}