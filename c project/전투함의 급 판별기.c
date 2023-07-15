#include <stdio.h>
#include <stdlib.h>

int main(){
	int rain;
	printf("배수량 입력 : ");
	scanf("%d",&rain); 
	
	if(rain<=150)
	{
		printf("대분류 : 고속정\n소분류 : 참수리급");
	}
	else if(rain<=230)
	{
		printf("대분류 : 고속정\n소분류 : 검은 독수리급");
	}
	else if(rain<=440)
	{
		printf("대분류 : 고속정\n소분류 : 윤영하급");
	}
	else if(rain<=1000)
	{
		printf("대분류 : 초계함\n소분류 : 동해급");
	} 
	else if(rain<=1200)
	{
		printf("대분류 : 초계함\n소분류 : 포항급");
	}
	else if(rain<=1500)
	{
		printf("대분류 : 호위함\n소분류 : 울산급");
	}
	else if(rain<=2300)
	{
		printf("대분류 : 호위함\n소분류 : 대구급");
	}
	else if(rain<=2800){
		printf("대분류 : 호위함\n소분류 : 인천급");
	}
	else if(rain<=3200)
	{
		printf("대분류 : 구축함\n소분류 : 광개토 대왕급");
	}
	else if(rain<=4500)
	{
		printf("대분류 : 구축함\n소분류 : 충무공 이순신급");
	}
	else
	{
		printf("대분류 : 구축함\n소분류 : 세종대왕급");
	}
}
