#include <stdio.h>

struct Highway{
	int speed;
	int speedlimit;
};

int main(){
	struct Highway h;
	
	printf("���� �ӵ� �� ���� �ӵ� �Է� : ");
	scanf("%d %d",&h.speed,&h.speedlimit);
	
	printf("�ʰ��� ���� : %d",h.speed-h.speedlimit);
}
