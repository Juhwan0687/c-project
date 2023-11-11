#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main(){
	COORD pos;

	char ch;

	int i,num;
	
	printf("Starting point / Number / Character : ");
	scanf("%d %d %d %c",&pos.X,&pos.Y,&num,&ch);
	
	for(i=0;i<=num;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		printf("%c",ch);
		
		pos.X+=4;
		
		Sleep(500);
	}
	
	getch();
}
