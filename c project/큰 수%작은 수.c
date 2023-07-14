#include <stdio.h>

int main(){
	int num,num2;
	printf("정수 입력 : ");
	scanf("%d %d",&num,&num2);
	if(num>num2)
	{
		printf("%d",num%num2==0);
	}
	else if (num<num2)
	{
		printf("%d",num2%num==0);
	}
	else
	{
		printf("%d",1);
	}
}
