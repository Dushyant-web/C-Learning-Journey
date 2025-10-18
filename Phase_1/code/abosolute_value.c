#include <stdio.h>

void main(){
    int num;

    printf("Enter The number --> ");
    scanf("%d",&num);

    if (num<= -1){
        printf("The Absolute Number Is --> %d",num*-1);
    }else if(num>0){
        printf("The Absolute Number Is --> %d",num);
    }else{
        printf("Invalid");
    }
}
