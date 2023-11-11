#include <stdio.h>
#include <windows.h>
#include <time.h>

int main(){
	COORD pos;
	
	printf("Starting point : ");
	scanf("%d %d",&pos.X,&pos.Y);
	
	int i=9;
	
	do{
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("%d",111*i);
		
		pos.X+=6;
		
		i--;
		
		Sleep(500);
	}while(i>=1);
}
