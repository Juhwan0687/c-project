#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=fopen("datafile.text","w");
	
	if(fp==NULL){
		printf("������ �����ϴ�.");
		exit(1);
	}
	
	fclose(fp);
}
