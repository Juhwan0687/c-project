#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int main(){
	COORD pos;
	
	printf("Starting point : ");
	scanf("%d %d",&pos.X,&pos.Y);
	
	int i;
	
	for(i=1;i<=10;i++){
		pos.Y-=2;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("%d",i*10);
		
		Sleep(500);
	}
	
	getch();
}
