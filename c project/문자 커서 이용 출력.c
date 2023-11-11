#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main(){
	COORD pos;
	
	char ch;
	
	int i;
	
	printf("Starting point / Special character : ");
	scanf("%d %d %c",&pos.X,&pos.Y,&ch);
	
	for(i=0;i<=9;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("%c",ch);
		
		pos.X-=4;
		
		Sleep(500);
	}
	
	getch();
}
