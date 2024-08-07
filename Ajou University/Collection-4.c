#include <stdio.h>

int main(){
    int a;
    
    printf("판별할 정수를 입력하시오 : ");
    scanf("%d",&a);
    
    if(a%2==0){
        printf("입력된 정수는 짝수 입니다");
    }
    else{
        printf("입력된 정수는 홀수 입니다");
    }
}