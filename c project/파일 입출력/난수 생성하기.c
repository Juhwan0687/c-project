#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	FILE *fp=fopen("RandomNumber.txt","w");
	
	int i,j;
	int ar[20];
	
	srand(time(NULL));
	
	for(i=0;i<=19;i++){
		fprintf(fp,"%d ",rand()%1000);
	}
	
	fclose(fp);
}
