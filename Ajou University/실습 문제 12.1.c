#include <stdio.h>
#include <ctype.h>

int main(){
	char c;
	
	printf("���ڸ� �Է��ϰ� enter>");
	scanf("%c",&c);
	getchar();
	
	if(isdigit(c)){
		printf("�����Դϴ�.");
	}
	else{
		if(isupper(c)){
			printf("�ҹ��� %c",tolower(c));
		}
		else{
			printf("�빮�� %c",toupper(c));
		}
	}
	
	return 0;
}
