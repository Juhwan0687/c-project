#include <stdio.h>

int main(){
	char sentence[100];
	scanf("%s",sentence);
	
	int length=0,x;
	while(sentence[length]!='\0'){
		x=sentence[length];
		if(x>='A'&&x<='Z'){
			printf("%c",x+32);
		}
		else{
			printf("%c",x-32);
		}
		length++;
	}
}
