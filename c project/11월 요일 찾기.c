#include <stdio.h>

int main(){
	int n;
	printf("11�� ��¥ �Է� : ");
	scanf("%d",&n);
	if(n>30 || n<=0){
		printf("ERROR");
		exit(1);
	} 
	switch(n%7){
		case 1:
			printf("�����");
			break;
		case 2:
			printf("�Ͽ���");
			break;
		case 3:
			printf("������");
			break;
		case 4:
			printf("ȭ����");
			break;
		case 5:
			printf("������");
			break;
		case 6:
			printf("�����");
			break;
		case 0:
			printf("�ݿ���");
			break;
		default:
			printf("������ �� �� �����ϴ�.");
	}
}
