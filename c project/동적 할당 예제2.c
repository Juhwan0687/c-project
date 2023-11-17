#include <stdio.h>
#include <stdlib.h>

int main(){
	double *p;
	char *k;
	
	p=(double*)malloc(sizeof(double));
	k=(char*)malloc(1);
	
	*p=3.141592;
	*k='A';
	
	printf("Double = %lf\nChar = %c",*p,*k);
	
	free(p);
	free(k);
}
