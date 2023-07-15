#include <stdio.h>
#include <stdlib.h>

int main(){
	int orbit;
	printf("고도 입력 : ");
	scanf("%d",&orbit); 
	
	if(orbit<=11)
	{
		printf("지나고 있는 층 : %s\n?특징 : %s","대기권","기상 현상");
	}
	else if(orbit<=50)
	{
		printf("지나고 있는 층: %s\n?특징 : %s","성층권","오존층");
	}
	else if(orbit<=80)
	{
		printf("지나고 있는 층 : %s\n?특징 : %s","중간권","유성 관찰");
	}
	else if(orbit<=1000)
	{
		printf("지나고 있는 층 : %s\n?특징 : %s","열권","오로라, 인공위성의 궤도");
	}
	else if(orbit>1000)
	{
		printf("지나고 있는 층 : %s\n?특징 : %s","외기권","우주");
	}
	return 0;
}
