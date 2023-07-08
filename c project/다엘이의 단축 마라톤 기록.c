#include <stdio.h>

int main(){
	int timer;
	printf("다엘이의 단축 마라톤 기록 : ");
	scanf("%d",&timer);
	int a=timer/3600; 
	int b=(timer-a*3600)/60;
	int d=timer/60;
	int c=timer-60*d;
	printf("\n다엘이의 기록 : %d시간 %d분 %d초",a,b,c);
}
