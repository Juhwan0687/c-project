#include <stdio.h>

int main(){ 
	int n;
	int *pn,*pr;
	int ar[10]={10,20,30,40,50,60,70,80,90,100};
	
	n=49;
	pn=&n;
	pr=&ar[2];
	printf("%d %d %p %p\n",n,ar[2],pn,pr);
	
	*pn=59;
	*pr=33;
	printf("%d %d %d %d\n",*pn,*pr,n,ar[2]);	
}
