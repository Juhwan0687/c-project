#include <stdio.h>

struct Circle{
	double r;
	double s;
	double i;
};

int main(){
	struct  Circle c;
	
	printf("������ �Է� : ");
	scanf("%lf",&c.r);
	
	c.i=2*3.14*c.r;
	c.s=c.r*c.r*3.14;
	
	printf("���� : %lf / ���� : %lf",c.s,c.i);
}
