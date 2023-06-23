#include <stdio.h>

int main(){
	int a,b,c;
	
	printf("정수 입력 : ");
	scanf("%d",&a);
	printf("정수 입력 : ");
	scanf("%d",&b);
	printf("%d\n",10%3);
	printf("%d\n",a%10);
	c=a%b;
	printf("%d",c);
}
