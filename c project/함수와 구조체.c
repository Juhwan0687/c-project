#include <stdio.h>

struct Coordi{
	int x;
	int y;
};

struct Circle{
	struct Coordi cen;
	double r;
};

void PrintCoordi(struct Coordi p);
void PrintCircle(struct Circle c);

int main(){
	struct Coordi p={6,9};
	struct Circle c={{4,5},12.4};
	
	PrintCoordi(p);
	PrintCircle(c);
}

void PrintCoordi(struct Coordi p){
	printf("ÁÂÇ¥ : {%d, %d}\n",p.x,p.y);
}

void PrintCircle(struct Circle c){
	printf("ÁÂÇ¥ : {%d, %d} / ¹ÝÁö¸§(%lfcm)",c.cen.x,c.cen.y,c.r);
}
