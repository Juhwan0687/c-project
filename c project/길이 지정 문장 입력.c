#include <stdio.h>
#include <string.h>

int main(){
	char *ar;
	int len,i;
	char ar2[];
	
	printf("Input length / sentence : ");
	scanf("%d",&len);
	
	ar=(char*)malloc(len*sizeof(char));
	
	gets(ar);

	ar2=strcpy(ar);
	
	printf("%s",ar2);

	free(ar);
}
