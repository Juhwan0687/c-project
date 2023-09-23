#include <stdio.h>

void addnum(int,int);
void subnum(int,int);
void mulnum(int,int);
void divnum(int,int);

int main(){
	int n,m;
	int *pa=&n;
	int *pb=&m;
	
	printf("정수 입력 : ");
	scanf("%d %d",&n,pb);
	
	addnum(*pa,*pb);
	subnum(n,m);
	mulnum(*pa,*pb);
	divnum(*pa,*pb);
}

void addnum(pa,pb){
	printf("Add : %d\n",pa+pb);
}

void subnum(n,m){
	printf("Sub : %d\n",n-m);
}

void mulnum(n,m){
	printf("Mul : %d\n",n*m);
}

void divnum(n,m){
	printf("Div : %d",n/m);
}
