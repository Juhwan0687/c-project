#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main(){
	COORD pos;
	
	char dir;
	
	int ar[10]={0,1,2,3,4,5,6,7,8,9};
	int i;
	
	printf("Starting point / Direction : ");
	scanf("%d %d %c",&pos.X,&pos.Y,&dir);
	
	switch(dir){
		case 'R':
			for(i=0;i<=9;i++){
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
				printf("%d",ar[i]);
				
				pos.X+=4;
				
				Sleep(500);
			}
			break;
		case 'L':
			for(i=0;i<=9;i++){
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
				printf("%d",ar[i]);
				
				pos.X-=4;
				
				Sleep(500);
			}
			break;
		case 'U':
			for(i=0;i<=9;i++){
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
				printf("%d",ar[i]);
				
				pos.Y-=4;
				
				Sleep(500);
			}
			break;
		case 'D':
			for(i=0;i<=9;i++){
				SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
				printf("%d",ar[i]);
				
				pos.Y+=4;
				
				Sleep(500);
			}
			break;
	}
	getch();
}
