#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define X_END 79
#define Y_END 24

void GotoXY(int x,int y);
void Move_All_Key(char chr,int *x,int *y);

int main(){
	char key;
	int x=0,y=0;
	
	do{
		system("cls");
		GotoXY(x,y);
		printf("@");
		key=getch();
		key=getch();
		Move_All_Key(key,&x,&y);
	}while(key!=27);
}

void GotoXY(int x,int y){
	COORD Pos={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),Pos);
}

void Move_All_Key(char key,int *x1,int *y1){
	switch(key){
		case 75:
			*x1=*x1-1;
			if(*x1<1)
				*x1=X_END;
			break;
		case 77:
			*x1=*x1+1;
			if(*x1>X_END)
				*x1=1;
			break;
		case 72:
			*y1=*y1-1;
			if(*y1<1)
				*y1=Y_END;
			break;
		case 80:
			*y1=*y1+1;
			if(*y1>Y_END)
				*y1=1;
			break;
	}
}
