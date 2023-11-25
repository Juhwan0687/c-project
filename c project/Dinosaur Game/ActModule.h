void Start(){
	COORD pos={20,10};
	
	Goto(pos.X,pos.Y);
	
	printf("Ready?");
	
	Sleep(1000);
	
	system("cls");
	
	Goto(pos.X,pos.Y);
	
	printf("Go!");
	
	Sleep(500);
	
	system("cls");
}

void Game(x,y){
	char key;
	
	int xed=27;
	int score=0;
	
	do{
		system("cls");
		
		COORD pos;
	
		int choice=rand()%3;
	
		switch(choice){
			case 0:
				pos.Y=7;
				break;
			case 1:
				pos.Y=10;
				break;
			case 2:
				pos.Y=13;
				break;
		}
		
		int i;
	
		for(i=27;i>=12;i-=3){
			Goto(i,pos.Y);
			printf("!");
			
			key=getch();
			key=getch();
			
			switch(key){
				case 72:
					y=y-3;
					if(y<7)
						y=7;
					break;
				case 80:
					y=y+3;
					if(y>13)
						y=13;
					break;
				case 32:
					break;
			}
			Goto(x,y);
			printf("@");
			
			system("cls");
		}
		if(y==pos.Y){
			system("cls");
			Goto(10,10);
			
			printf("Game Over...\nScore : %d",score);
			
			exit(1);
		}
		else{
			score+=10;
		}
	}while(key!=27);
}

void Goto(x,y){
	COORD pos={x,y};
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
