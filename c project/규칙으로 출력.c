#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int main(){
	COORD pos;
	
	char ar[25]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	
	int j,time;
	
	printf("Starting point / Time : ");
	scanf("%d %d %d",&pos.X,&pos.Y,&time);
	for(j=0;j<=3;j++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
		printf("%2d",ar[j]);
				
		pos.X+=4;
				
		Sleep(time);
	}
	for(j=4;j<=7;j++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
		printf("%2d",ar[j]);
				
		pos.Y+=2;
				
		Sleep(time);
	}
	for(j=8;j<=11;j++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
		printf("%2d",ar[j]);
				
		pos.X-=4;
								
		Sleep(time);
	}
	for(j=12;j<=15;j++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
		printf("%2d",ar[j]);
				
		pos.Y-=2;
								
		Sleep(time);
	}
	pos.Y+=2;
	pos.X+=4;
	for(j=16;j<=17;j++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
		printf("%2d",ar[j]);
				
		pos.X+=4;
								
		Sleep(time);
	}
	for(j=18;j<=19;j++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
		printf("%2d",ar[j]);
				
		pos.Y+=2;
								
		Sleep(time);
	}
	for(j=20;j<=21;j++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
		printf("%2d",ar[j]);
				
		pos.X-=4;
								
		Sleep(time);
	}
	for(j=22;j<=23;j++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
				
		printf("%2d",ar[j]);
				
		pos.Y-=2;
								
		Sleep(time);
	}
	pos.Y+=2;
	pos.X+=4;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	
	printf("%2d",ar[24]);
								
	Sleep(time);
			
	getch();
}
