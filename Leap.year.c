#include<stdio.h>
int main(){
    printf("Enter your year: ");
    int year;
    scanf("%d",&year);

    if(year%400==0 || year%4==0 && year%100!=0){
        printf("Your year is leap year\n");
    }else {
        printf("Your year is not leap year.\n");
    }
    return 0;
}