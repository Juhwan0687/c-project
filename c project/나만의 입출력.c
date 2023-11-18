#include <stdio.h>
#include <string.h>

void mygets(x);
void myputs(x);

int main(){
	char *ar;
	
	mygets(&ar);
	
	myputs(&ar);
	
	free(ar);
}

void mygets(x){
	printf("Input sentence : ");
	
	gets(x);
	
	x=(char*)malloc(strlen(x));
}

void myputs(x){
	printf("%s",x);
}
