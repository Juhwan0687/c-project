#include <stdio.h>

int main(){
	int ar[10]={10,20,30,40,50,60,70,80,90,100};
	int i;

	*(ar+0)=34;
	*(ar+1)=21;

	printf("%d %d\n",ar[0],*(ar+0));
	printf("%d %d\n",ar[1],*(ar+1));
	printf("%d %d",*(ar+2),*(ar+3));
}
