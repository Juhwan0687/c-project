#include <stdio.h>

int main(){
	double a;
	double b;
	printf("사각형의 가로 : ");
	scanf("%lf",&a);
	printf("사각형의 세로 : ");
	scanf("%lf",&b);
	printf("\n%lfcm",(a*2+b*2)/10);
	printf("\n%lfcm2",(a/10)*(b/10));
	return 0;
}
