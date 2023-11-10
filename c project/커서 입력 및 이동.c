#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	int x,y;
	COORD pos;
	
	do{
		pos.X=0;
		pos.Y=0;
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("커서의 위치를 입력하세요 : ");
		scanf("%d %d",&pos.X,&pos.Y);
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("▣");
		
		getche();
	}while(pos.X<=80&&pos.Y<=24);
}
