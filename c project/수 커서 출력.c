#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(){
	COORD pos;
	
	printf("Ω√¿€ ¡¬«• : ");
	scanf("%d %d",&pos.X,&pos.Y);

	int i,j=110;
	
	for(i=1;i<=9;i++){
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		pos.X-=4;
		
		j-=10;
		printf("%d",j);
		
		Sleep(1000);
	}
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	
	pos.X-=4;
	
	printf("%d",j-10);
}
