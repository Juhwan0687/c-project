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
		
	printf("C1�� ����(%d, %d) / ������(%lf)\n",c1.cen.x,c1.cen.y,c1.r);
	
	printf("C2�� ����(%d, %d) / ������(%lf)\n",c2.cen.x,c2.cen.y,c2.r);

	puts("C3�� ���� �Է� : ");
	scanf("%d %d %lf",&c3.cen.x,&c3.cen.y,&c3.r);
	
	printf("C3�� ����(%d, %d) / ������(%lf)\n",c3.cen.x,c3.cen.y,c3.r);
}
