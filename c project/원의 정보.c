#include <stdio.h>

struct Coordi{
	int x;
	int y;
};

struct Circle{
	struct Coordi cen;
	double r;
};

int main(){
	struct Circle c1;
	struct Circle c2={{4,5},12.4};
	struct Circle c3;
	
	c1.cen.x=0;
	c1.cen.y=1;
	c1.r=23.5;
		
	printf("C1의 중점(%d, %d) / 반지름(%lf)\n",c1.cen.x,c1.cen.y,c1.r);
	
	printf("C2의 중점(%d, %d) / 반지름(%lf)\n",c2.cen.x,c2.cen.y,c2.r);

	puts("C3의 정보 입력 : ");
	scanf("%d %d %lf",&c3.cen.x,&c3.cen.y,&c3.r);
	
	printf("C3의 중점(%d, %d) / 반지름(%lf)\n",c3.cen.x,c3.cen.y,c3.r);
}
