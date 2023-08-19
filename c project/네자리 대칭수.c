#include <stdio.h>

int main(){
	int x,y;
	for(x=1;x<=9;x++){
		for(y=1;y<=9;y++){
			printf("%d%d%d%d ",x,y,y,x);
		}
	}
}
