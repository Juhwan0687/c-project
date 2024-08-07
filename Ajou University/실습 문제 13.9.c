#include <stdio.h>
#include <ctype.h>

int main(){
	char str[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("알파벳 소문자를 입력하고 enter>");
		scanf("%c",&str[i]);
		getchar();
	}
	
	printf("\n");
	
	for(i=0;i<10;i++){
		printf("%c",toupper(str[i]));
	}
}
