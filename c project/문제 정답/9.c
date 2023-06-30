#include <stdio.h>

void main(){
	int a,b,c;
	printf("세 자리 정수를 입력하세요 : ");
	scanf("%d %d %d",&a,&b,&c);
	printf("\n\n%d+%d+%d=%d\n",a,b,c,a+b+c);
	printf("%d*%d*%d=%d",a,b,c,a*b*c);
}
