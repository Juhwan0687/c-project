#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=fopen("Poem.txt","w");
	
	char poem[100];
	
	puts("시조를 입력하세요 : ");
	scanf("%s",&poem);
	
	fprintf(fp,"%s",poem);
	
	fclose(fp);
}
