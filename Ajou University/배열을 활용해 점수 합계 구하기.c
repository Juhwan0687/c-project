#include <stdio.h>

int main(){
	int Korea[]={15,17,27,32};
	int China[]={27,16,19,11};
	int i,Ko_sum=0,Ch_sum=0;
	
	for(i=0;i<4;i++){
		Ko_sum+=Korea[i];
		Ch_sum+=China[i];
		
		printf("<%dQ>\n대한민국의 점수 합계 : %d / 중국의 점수 합계 : %d\n",i+1,Ko_sum,Ch_sum);
	}
	
	printf("\n<총점>\n대한민국 : %d / 중국 : %d",Ko_sum,Ch_sum); 
}
