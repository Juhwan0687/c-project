#include <stdio.h>

int main(){
	int num;
	printf("좌석 수 입력 : ");
	scanf("%d",&num);
	if(num==2)
	{
		printf("스포츠카\n");
	}
	else if(num==5)
	{
		printf("승용차\n");
	}
	else if(num==7)
	{
		printf("SUV\n");
	}
	else if(num==9)
	{
		printf("승합차\n");
	}
	else if(num==12)
	{
		printf("미니버스\n");
	}
	else
	{
		printf("입력 오류\n");
	}
}
