#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

void GotoXY(int x,int y);
void MyDelay(int d);

int main(){
	int i,s;
	
	printf("출력 속도 : ");
	scanf("%d",&s);
	for(i=1;i<=10;i++){
		GotoXY(40,i+1);
		printf("%2d",i);
		MyDelay(s);
	}
}

void GotoXY(int x,int y){
	COORD pos={x,y};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void MyDelay(int d){
	Sleep(d);
}
