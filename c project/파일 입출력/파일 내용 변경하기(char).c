#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp;
	
	fp=fopen("CharOut.text","w");
	
	if(fp==NULL){
		printf("���� ����\n");
		exit(1);
	}
	
	fputc('A',fp);
	fputc('B',fp);
	fputc('\n',fp);
	fputc(97,fp);
	fputc(98,fp);
	
	fclose(fp);
}
