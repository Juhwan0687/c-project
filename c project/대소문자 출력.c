#include <stdio.h>

int main(){
	int ascii='A';
	
	while(ascii<='z'){
		printf("%c ",ascii);
		ascii++;
		if(ascii=='Z'){
			printf("%c ",ascii);
			printf("\n");
			ascii='a';
		}
	}
}
