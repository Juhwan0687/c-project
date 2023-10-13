#include <stdio.h>

struct Circle{
	double r;
	double s;
	double i;
};

int main(){
	struct  Circle c;
	
	printf("반지름 입력 : ");
	scanf("%lf",&c.r);
	
	c.i=2*3.14*c.r;
	c.s=c.r*c.r*3.14;
	
	printf("넓이 : %lf / 원주 : %lf",c.s,c.i);
}
