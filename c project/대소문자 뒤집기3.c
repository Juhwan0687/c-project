#include <stdio.h>

int main(){
	char sentence[100];
	int length=0,x;
	
	puts("문자열 입력 : ");
	scanf("%s",&sentence);
	
	while(sentence[length]!='\0'){
		length++;
	}
	
	for(x=0;x<=length;x++){
		if(sentence[x]>='A'&&sentence[x]<='Z'){
			printf("%c",sentence[x]+32);
		}
		else{
			printf("%c",sentence[x]-32);
		}
	}
}
