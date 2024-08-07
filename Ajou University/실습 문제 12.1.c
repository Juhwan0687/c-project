#include <stdio.h>
#include <ctype.h>

int main(){
	char c;
	
	printf("문자를 입력하고 enter>");
	scanf("%c",&c);
	getchar();
	
	if(isdigit(c)){
		printf("숫자입니다.");
	}
	else{
		if(isupper(c)){
			printf("소문자 %c",tolower(c));
		}
		else{
			printf("대문자 %c",toupper(c));
		}
	}
	
	return 0;
}
