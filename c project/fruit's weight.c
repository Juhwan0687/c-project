#include <stdio.h>
#include <stdlib.h>

void main(){
	double fruit;
	printf("과일의 무게(g) : ");
	scanf("%lf",&fruit);
	printf("\n%lfkg",fruit/1000);
	printf("\n%lft",fruit/1000000);
}
