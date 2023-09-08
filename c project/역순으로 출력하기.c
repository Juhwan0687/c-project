#include <stdio.h>

int main(){
	char str[]="Coding is computer programming";
	int length=0;
	while(str[length]!='\0'){
		length++;
	}
	while(length>=0){
		printf("%c ",str[length]);
		length--;
	}
}
