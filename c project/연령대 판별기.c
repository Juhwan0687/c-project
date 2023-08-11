#include <stdio.h>

int main(){
	int n;
	printf("나이 입력 : ");
	scanf("%d",&n);
	switch(n/10){
		case 1:
			printf("청소년");
			break;
		case 2:
			printf("청년");
			break;
		case 3:
			printf("청년");
			break;
		case 4:
			printf("중년");
			break;
		case 5:
			printf("중년");
			break;
		case 6:
			printf("장년");
			break;
		case 7:
			printf("노년");
			break;
		case 8:
			printf("노년");
			break;
		case 9:
			printf("도전 백세");
			break;
		case 0:
			printf("유소년");
			break;
		default:
			printf("성공 백세");
			break;
	}
}
