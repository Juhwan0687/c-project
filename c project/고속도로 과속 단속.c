#include <stdio.h>

struct Highway{
	int speed;
	int speedlimit;
};

int main(){
	struct Highway h;
	
	printf("현재 속도 및 제한 속도 입력 : ");
	scanf("%d %d",&h.speed,&h.speedlimit);
	
	printf("초과한 정도 : %d",h.speed-h.speedlimit);
}
