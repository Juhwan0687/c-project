#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=fopen("Poem.txt","w");
	
	char poem[100];
	
	puts("������ �Է��ϼ��� : ");
	scanf("%s",&poem);
	
	fprintf(fp,"%s",poem);
	
	fclose(fp);
}
