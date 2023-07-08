#include <stdio.h>

int main(){
	double height;
	int weight;
	printf("키, 몸무게 입력 : ");
	scanf("%lf %d",&height,&weight);
	height+=0.1;
	weight-=5;
	printf("\nBMI : %lf",weight/(height*height));
}
