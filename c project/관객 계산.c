#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int vip;
	int normal;
	printf("VIP 관객 : ");
	scanf("%d",&vip);
	printf("\n일반 관객 : ");
	scanf("%d",&normal);
	int chair=ceil(vip+normal/5);/*고민 중*/
	int water=ceil((vip+normal)/35); 
	int air=ceil((vip+normal)/97);
	int staff1=ceil((vip+normal)/53+(vip+normal)/100);
	int staff2=ceil(normal/100+vip/20);
	int souve=normal*2+vip*4;
	printf("의자 : %d\n정수기 : %d\n에어컨 : %d\n경호 스태프 : %d\n안내 스태프 : %d\n기념품 : %d",chair,water,air,staff1,staff2,souve);
	return 0;
}   //올림 방법 생각해보기!