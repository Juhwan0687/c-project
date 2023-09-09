#include <stdio.h>
#include <stdlib.h>

int main(){
	char str1[25]="C language i powerful";
	char str2[]="Coding is computer programming";
	int length=0,i;
	
	for(i=0;i<=25;i++){
		printf("%c",str1[i]);
	}
	printf("\n");
	
	while(str2[length]!='\0'){
		printf("%c",str2[length]);
		length++;
	}
}
