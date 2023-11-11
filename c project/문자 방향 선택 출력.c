#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main(){
	COORD pos;
	
	char dir;
	char ar[9]={'A','B','C','D','E','F','G','H','I'};
	
	int i;
	
	printf("Starting point / Direction : ");
	scanf("%d %d %c",&pos.X,&pos.Y,&dir);
	
	switch(dir){
		case 'R':
			for(i=0;i<=8;i++){
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
				printf("%c",ar[i]);
				
				pos.X+=4;
				
				Sleep(500);
			}
			break;
		case 'L':
			for(i=0;i<=8;i++){
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
				printf("%c",ar[i]);
				
				pos.X-=4;
				
				Sleep(500);
			}
			break;
		case 'U':
			for(i=0;i<=8;i++){
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
				printf("%c",ar[i]);
				
				pos.Y-=4;
				
				Sleep(500);
			}
			break;
		case 'D':
			for(i=0;i<=8;i++){
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
				printf("%c",ar[i]);
				
				pos.Y+=4;
				
				Sleep(500);
			}
			break;
	}
	getch();
}
