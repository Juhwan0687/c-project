#include <stdio.h>
#include <string.h>

char mystrlen(x);

int main(){
	char *ar;
	int i=0;

	ar=(char*)malloc(100);
	
	printf("Input sentence : ");
	gets(ar);

	mystrlen(ar);
	
	free(ar);
}
char mystrlen(x){
	int i=strlen(x);
	printf("Length : %d",i);
}