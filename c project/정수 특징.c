#include <stdio.h>

int main(){
	int num;
	printf("정수 입력 : ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("양수\n");
	}
	else if(num<0)
	{
		printf("음수\n");
	}	
	else
	{
		printf("%d\n",0);
	}
	if(num%2==0)
	{
		printf("짝수\n");
	}
	else
	{
		printf("홀수\n");
	}
	if(num%3==0)
	{
		printf("3의 배수\n");
	}
	else
	{
		printf("3의 배수가 아니다\n");
	}
	if(num>0)
	{
		printf("%d",num);
	}
	else if(num<0)
	{
		printf("%d",num*-1);
	}
	else
	{
		printf("%d",0);
	}
}
