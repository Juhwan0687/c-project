#include <stdio.h>
#include <stdlib.h>

int Power(int n);

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	printf("%d",Power(n));
	return 0;
}

int Power(int n){
	return n*n;
}
