#include <stdio.h>

struct Divide{
	int share;
	int remain;
};

int main(){
	int x,y;
	
	struct Divide d;
	
	printf("���� ���� �Է�: ");
	scanf("%d %d",&x,&y);
	
	d.share=x/y;
	d.remain=x%y;
	
	printf("�� : %d / ������ : %d",d.share,d.remain);
}
