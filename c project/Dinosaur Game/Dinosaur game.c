#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "ActModule.h"
#include <time.h>

int main(){
	srand(time(NULL));
	
	printf("==Information==\n\n1. Up arrow to up\n2. Down arrow to down\n3. Space to stay\n4. Stop pressing keys to pause\n5. ESC to exit\n6. Press any key to start\n\n-Enjoy Fun and Good Luck!");
	
	getche();
	
	system("cls");

	system("mode con cols=40 lines=20 | title Dinosaur_Game");	

	Start();
	
	COORD pos={12,10};
	
	Game(pos.X,pos.Y);
}
