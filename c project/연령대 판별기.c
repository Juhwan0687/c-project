#include <stdio.h>

int main(){
	int n;
	printf("���� �Է� : ");
	scanf("%d",&n);
	switch(n/10){
		case 1:
			printf("û�ҳ�");
			break;
		case 2:
			printf("û��");
			break;
		case 3:
			printf("û��");
			break;
		case 4:
			printf("�߳�");
			break;
		case 5:
			printf("�߳�");
			break;
		case 6:
			printf("���");
			break;
		case 7:
			printf("���");
			break;
		case 8:
			printf("���");
			break;
		case 9:
			printf("���� �鼼");
			break;
		case 0:
			printf("���ҳ�");
			break;
		default:
			printf("���� �鼼");
			break;
	}
}
