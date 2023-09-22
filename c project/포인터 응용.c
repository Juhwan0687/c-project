#include <stdio.h>

void getChar(char *cp);
void printfChar(char *cp);

int main(){
	char ch1,ch2;
	char *cp1,*cp2;
	
	cp1=&ch1;
	cp2=&ch2;
	printf("문자1 입력 : ");
	ch1=getchar();
	getchar();
	printf("문자2 입력 : ");
	scanf("%c",&ch2);
	getchar();
	printf("%c",*cp1);
	putchar(*cp2);
	
	getChar(&ch1);
	printChar(cp1);
}

void getChar(char *cp){
	printf("문자3 입력 : ");
	*cp=getchar();
}

void printChar(char *cp){
	printf("%c",*cp);
}
