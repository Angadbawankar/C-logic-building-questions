#include<stdio.h>
int main(){
    printf("Enter your three numbers.");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);


    if(a>b && a>c){
        printf("%d a is greater than %d and %d.\n", a, b, c);
    }else if(b>c){
        printf("%d is greater than %d and smaller than %d.\n", b, c, a);
    }else {
        printf("%d is greater than %d and %d.\n",c, b,a);
    }

    return 0;
}