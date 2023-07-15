#include <stdio.h>

int main(){
	int num,num2,num3;
	
	printf("정수 3개 입력 : ");
	scanf("%d %d %d",&num,&num2,&num3);
	
	if(num*2>num2+num3)
	{
		printf("%d\n",num);
	}
	else if(num2*2>num+num3)
	{
		printf("%d\n",num2);
	}
	else
	{
		printf("%d\n",num3);
	}
	return 0;
}
