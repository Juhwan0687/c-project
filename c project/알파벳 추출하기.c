#include <stdio.h>

int main(){
	char a;
	
	while(a!='\n'){
		a=getchar();
		if(('a'<=a&&a<='z')||('A'<=a&&a<='Z')){
			putchar(a);
		}
	}
}
