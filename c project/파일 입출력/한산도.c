#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *fp=fopen("Research.txt","r");
	
	char name[100];
	int people;
	double square,sea;
	
	fscanf(fp,"%s %d %lf %lf",&name,&people,&square,&sea);
	
	printf("지명 : %s\n인구 : %d\n면적 : %lf\n해안선 : %lf",name,people,square,sea);

	fclose(fp);
}
