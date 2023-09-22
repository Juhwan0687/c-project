#include <stdio.h>

int main(){
	char ch='A';
	
	char* pch;
	pch=&ch;
	
	printf("%p\n",pch);
	
	printf("%c\n",*pch);
}
