#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main(){
	int x,y;
	COORD pos={1,0};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작 위치(%d, %d)",pos.X,pos.Y);
	getch();
	//
	pos.X=5;
	pos.Y=4;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작 위치(%d, %d)",pos.X,pos.Y);
	getch();
	//
	pos.X=10;
	pos.Y=9;
	//
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작 위치(%d, %d)",pos.X,pos.Y);
	getch();
	//
	pos.X=15;
	pos.Y=14;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("←: 커서 시작 위치(%d, %d)",pos.X,pos.Y);
	getch();
}
