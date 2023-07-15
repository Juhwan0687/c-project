#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	double num;
	
	printf("실수 입력 : ");
	scanf("%lf",&num);

	num-=0.5;
	num=ceil(num);
	printf("%lf",num);
	return 0;
}
