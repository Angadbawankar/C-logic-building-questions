#include<stdio.h>
int main(){
    printf("Enter the range of number : ");
    int range;
    scanf("%d",&range);
    

    for(int i =3; i<=range; i++){
        if(i%3==0){
            printf("%d\n",i);
        }
    }
    return 0;
}