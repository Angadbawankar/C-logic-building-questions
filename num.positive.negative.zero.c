#include<stdio.h>
int main(){
    printf("Enter your number : ");
    int number;
    scanf("%d",&number);
    
    if (number<0){
        printf("Your number is negative.\n");
    }else if(number==0){
        printf("your number is zero.\n");
    }else if(number>0){
        printf("Your number is positive.\n");
    }
    return 0;
}   