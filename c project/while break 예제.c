#include <stdio.h>

int main(){
	int i=0;
	
	while(i<10)
	{
		printf("i의 값 : %d\n",i);
		i++;
		if(i==5){
			break;
		}
	}
}
