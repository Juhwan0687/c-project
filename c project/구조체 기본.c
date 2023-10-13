#include <stdio.h>

struct Coordi{
	int x;
	int y;
};

int main(){
	struct Coordi p1;
	struct Coordi p2={5,9};
	struct Coordi p3;
	struct Coordi p4;
	
	p1.x=2;
	p1.y=3;
	
	printf("p1ÀÇ ÁÂÇ¥(%d, %d)\n",p1.x,p1.y);
	printf("p2ÀÇ ÁÂÇ¥(%d, %d)\n",p2.x,p2.y);
}
