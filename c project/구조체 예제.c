#include <stdio.h>

struct Circle{
	int x;
	int y;
	double r;
};

int main(){
	struct Circle c1,c3,c4;
	
	c1.x=15;
	c1.y=16;
	c1.r=17;
	
	printf("c1�� ��ǥ(%d, %d) / ������(%lf)\n",c1.x,c1.y,c1.r);
	
	struct Circle c2={23,24,25};
	
	printf("c2�� ��ǥ(%d, %d) / ������(%lf)\n",c2.x,c2.y,c2.r);
	
	c3=c1;
	
	printf("c3�� ��ǥ(%d, %d) / ������(%lf)\n",c3.x,c3.y,c3.r);
	
	c4.x=c2.y;
	c4.y=c2.x;
	c4.r=22;
	
	printf("c4�� ��ǥ(%d, %d) / ������(%lf)\n",c4.x,c4.y,c4.r);
}
