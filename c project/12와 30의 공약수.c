#include <stdio.h>

int main(){
	int num;
	
	printf("정수 입력 : ");
	scanf("%d",&num);
	
	if(30%num==0&&12%num==0)
	{
		printf("%d=12와 30의 공약수",num);
	}
	else
	{
		printf("%d!=12와 30의 공약수",num);
	}
	return 0;
}
