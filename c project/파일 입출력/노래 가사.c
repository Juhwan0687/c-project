#include <stdio.h>
#include <stdlib.h>

int main(){
	char song[1000];
	
	printf("�����ϴ� �ó� �뷡 ���� �Է� : ");
	scanf("%s",&song);
	
	FILE *fp=fopen("Song.txt","w");
	
	fprintf(fp,"%s",song);
	
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("\n���簡 ����Ǿ����ϴ�.");
	
	fclose(fp);
}
