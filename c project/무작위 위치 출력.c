#include <stdio.h>
#include <windows.h>
#include <time.h>

void GotoXY(int x,int y,int i);

int main(){
	int x=10,y=10;
	int x1,choi;
	
	srand(time(NULL));
	
	while(1){
		x=10;
		y=10;
		for(int i=0;i<=9;i++){
			x1=rand()%10;
			choi=rand()%2;
			y++;
			switch(choi){
				case 0:
					GotoXY(x+x1,y,i);
					break;
				case 1:
					GotoXY(x-x1,y,i);
					break;
			}
		}
	}
}

void GotoXY(int x,int y,int i){
	COORD Pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
	printf("@");
	Sleep(500);
	if(i==9){
		system("cls");
	}
}
