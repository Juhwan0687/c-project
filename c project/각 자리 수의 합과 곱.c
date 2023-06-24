#include <stdio.h>
#include <stdlib.h>

//두자리 수의 각 자리 수의 합
int main(){
    int a;
    int b;
    int c;
    printf("세 자리 수 입력 : ");
    scanf("%d %d %d",&a, &b,&c);
    printf("%d\t%d",a+b+c,a*b*c);
    return 0;
}

/*두자리 수의 각 자리 수의 합
void main(){
    int a;
    int b;
    printf("두 자리 수 입력");
	printf(" : ");
    scanf("%d %d",&a, &b);
    printf("%d",a+b);
    return 0;
}*/
