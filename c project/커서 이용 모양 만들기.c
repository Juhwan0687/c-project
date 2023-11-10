#include <stdio.h>
#include <time.h>
#include <windows.h>

int main(){
	COORD pos;
	
	printf("Ω√¿€ ¡¬«• : ");
	scanf("%d %d",&pos.X,&pos.Y);

	int i,j=0,g;
	
	for(i=1;i<=4;i++){
		pos.X+=2;
		pos.Y-=2;
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		j+=1;
		printf("%d",j);
		
		Sleep(500);
	}
	pos.X+=2;
	pos.Y-=2;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	
	printf("%d",j+1);
	
	Sleep(500);
	
	j++;
	
	for(g=1;g<=4;g++){
		pos.X+=2;
		pos.Y+=2;
		
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		
		j+=1;
		printf("%d",j);
		
		Sleep(500);
	}
}
