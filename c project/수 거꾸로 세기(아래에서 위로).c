#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main(){
	COORD pos;
	
	printf("Starting point : ");
	scanf("%d %d",&pos.X,&pos.Y);
	
	int i;
	
	for(i=9;i>=1;i--){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("%d",111*i);
		
		pos.Y-=2;
		
		Sleep(500);
	}
	
	getch();
}
