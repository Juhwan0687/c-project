#include <stdio.h>

struct Divide{
	int share;
	int remain;
};

int main(){
	int x,y;
	
	struct Divide d;
	
	printf("나눌 정수 입력: ");
	scanf("%d %d",&x,&y);
	
	d.share=x/y;
	d.remain=x%y;
	
	printf("몫 : %d / 나머지 : %d",d.share,d.remain);
}
