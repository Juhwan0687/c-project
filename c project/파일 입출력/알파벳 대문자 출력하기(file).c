#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=fopen("CapitalAlphabet.txt","w");
	
	char str1[26];
	int i;
	
	for(i=0;i<=25;i++){
		fputc(65+i,fp);
	}
	
	fclose(fp);
	
	FILE *fp2=fopen("CapitalAlphabet.txt","r");
	
	fscanf(fp2,"%s",str1);
	
	printf("CapitalAlphabet.txtÀÇ ¿ä¼Ò : %s",str1);
	
	fclose(fp2);
}
