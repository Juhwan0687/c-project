#include <stdio.h>

int main(){
	int n;
	printf("11월 날짜 입력 : ");
	scanf("%d",&n);
	if(n>30 || n<=0){
		printf("ERROR");
		exit(1);
	} 
	switch(n%7){
		case 1:
			printf("토요일");
			break;
		case 2:
			printf("일요일");
			break;
		case 3:
			printf("월요일");
			break;
		case 4:
			printf("화요일");
			break;
		case 5:
			printf("수요일");
			break;
		case 6:
			printf("목요일");
			break;
		case 0:
			printf("금요일");
			break;
		default:
			printf("요일을 알 수 없습니다.");
	}
}
