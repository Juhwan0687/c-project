#include <stdio.h>

int main(){
	int n;
	n=4;
	switch(n){
		case 0:
			printf("영입니다.");
			break;
		case 1:
			printf("일입니다.");
			break;
		case 2:
			printf("이입니다.");
			break;
		case 3:
			printf("삼입니다.");
			break;
		default:
			printf("해당하는 수가 없습니다.");
	} 
}
