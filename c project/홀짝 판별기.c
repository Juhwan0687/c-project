#include <stdio.h>

int main(){
	int n;
	printf("���� �Է� : ");
	scanf("%d",&n);
	switch(n%2){
		case 1:
			printf("Ȧ��");
			break;
		case 0:
			printf("¦��");
			break;
		default:
			printf("�ڿ���");
			break;
	}
}
