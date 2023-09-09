#include <stdio.h>

int main(){
	char word,word2;
	
	printf("문자 입력 : ");
	scanf("%c %c",&word,&word2);
	
	if(word>='A'&&word<='Z'){
		printf("%c ",word+32);
	}
	else{
		printf("%c ",word-32);
	}
	
	if(word2>='A'&&word2<='Z'){
		printf("%c ",word2+32);
	}
	else{
		printf("%c ",word2-32);
	}
}
