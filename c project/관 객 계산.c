#include <stdio.h>

int main(){
	int vip;
	int normal;
	printf("VIP ���� : ");
	scanf("%d",&vip);
	printf("\n�Ϲ� ���� : ");
	scanf("%d",&normal);
	int chair=vip+normal/5;/*��� ��*/
	int water=(vip+normal)/35; 
	int air=(vip+normal)/97;
	int staff1=(vip+normal)/53+(vip+normal)/100;
	int staff2=normal/100+vip/20;
	int souve=normal*2+vip*4;
	printf("���� : %d\n������ : %d\n������ : %d\n��ȣ ������ : %d\n�ȳ� ������ : %d\n���ǰ : %d",chair,water,air,staff1,staff2,souve);
	return 0;
}   //�ø� ��� ������ ����! 
