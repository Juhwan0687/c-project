#include <stdio.h>

int main(){
	char str[15]={'H','i',' ','C','3',' ','C','o','d','i','n','g','\0'};
	int length=0;
	while(str[length]!='\0'){
		printf("%c\n",str[length]);
		length++;
	}
	printf("\nLength = %d",length);
}*
