#include <stdio.h>
#include <stdlib.h>

int main(){
	int ar[10]={10,20,30,40,50,60,70,80,90,100};

	printf("%d\n",ar[0]);
	printf("%d\n",ar+0);
	printf("%d\n",&ar[0]);
	printf("%d\n",*(ar+0));
}
