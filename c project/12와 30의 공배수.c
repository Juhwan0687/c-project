#include <stdio.h>

int main(){
	int num;
	
	printf("정수 입력 : ");
	scanf("%d",&num);
	
	if(num%60==0)
	{
		printf("%d=12와 30의 공배수",num);
	}
	else
	{
		printf("%d!=12와 30의 공배수",num);
	}
	return 0;
}
