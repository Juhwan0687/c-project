#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=fopen("Research.txt","r");
	
	char name[100];
	int people;
	double square,sea;
	
	fscanf(fp,"%s %d %lf %lf",&name,&people,&square,&sea);
	
	printf("���� : %s\n�α� : %d\n���� : %lf\n�ؾȼ� : %lf",name,people,square,sea);

	fclose(fp);
}
