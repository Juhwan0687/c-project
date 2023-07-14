#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
	
	int rnd=rand()%1024;
	
	if (rnd>500)
	{
		printf("조건식1 실행\n");
	}
	else
	{
		printf("조건식2 실행\n");
	}
	if (rnd>900)
	{
		printf("조건식3 실행\n");
	}
	else
	{
		printf("조건식4 실행\n"); 
	}
}
