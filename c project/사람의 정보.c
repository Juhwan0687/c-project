#include <stdio.h>
#include <string.h>

struct Address{
	char name[10];
	char phon[20];
	char home[50];
};

int main(){
	struct Address man1;
	
	strcpy(man1.name,"����ȯ");
	strcpy(man1.phon,"01012345678");
	strcpy(man1.home,"������");
	
	printf("Man1�� �̸�(%s) / ��ȭ��ȣ(%s) / �ּ�(%s)\n",man1.name,man1.phon,man1.home);
	
	struct Address man2;
	
	strcpy(man2.name,"OO��");
	strcpy(man2.phon,"01034567890");
	strcpy(man2.home,"������");
	
	printf("Man2�� �̸�(%s) / ��ȭ��ȣ(%s) / �ּ�(%s)\n",man2.name,man2.phon,man2.home);
	
	struct Address man3;
	
	puts("Man3�� ���� �Է� : ");
	scanf("%s / %s / %s",&man3.name,&man3.phon,&man3.home);
	
	printf("Man3�� �̸�(%s) / ��ȭ��ȣ(%s) / �ּ�(%s)\n",man3.name,man3.phon,man3.home); 
}
