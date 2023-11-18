#include <stdio.h>

int main(){
	char *ar;
	int len,i;
	
	printf("Input length / sentence : ");
	scanf("%d",&len);
	
	ar=(char*)malloc(len*sizeof(char));
	
	gets(ar);
	
	for(i=0;i<len+1;i++){
		printf("%c",ar[i]);
	}
}
