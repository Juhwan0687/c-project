#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *out=fopen("NumberFile.txt","w");
	int n,m;
	double d1,d2;
	
	if(out==NULL){
		printf("���� ����\n");
		exit(1);
	}
	
	printf("������ �� �� �Է��ϼ��� : ");
	scanf("%d %d",&n,&m);
	printf("�Ǽ��� �� �� �Է��ϼ��� : ");
	scanf("%lf %lf",&d1,&d2);
	
	printf("\n\n\n�Է� ���� ������ ��� ��µǾ����ϴ�.\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("�� �ֿܼ��� ã������?");
	
	fprintf(out,"%d %d\n",n,m);
	fprintf(out,"%lf %lf",d1,d2);
	
	fclose(out);
}
